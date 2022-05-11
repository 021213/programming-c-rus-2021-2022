#include "LinkedList.h"

std::ostream& operator<<(std::ostream& stream, const Node& node)
{
	stream << node.data;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	stream << "[" << list.count << "] : { ";
	Node* temp = list.head;
	while (temp != nullptr)
	{
		stream << *temp << " ";
		//stream << temp->data << " ";
		temp = temp->next;
	}
	stream << "}";
	return stream;
}

bool LinkedList::indexValid(int index)
{
	return index >= 0 && index < count;
}

Node*& LinkedList::nodeByIndex(int index)
{
	if (!indexValid(index))
	{
		return new Node();
	}
	Node* temp = head;
	for (int i = 0; i < index; ++i)
	{
		temp = temp->next;
	}
	return temp;
}

void LinkedList::insertNode(Node*& node, int index)
{
	if (!indexValid(index))
	{
		return;
	}
	if (index == 0)
	{
		node->next = head;
		head = node;
		++count;
		return;
	}
	Node* temp = head;
	for (int i = 0; i < index - 1; ++i)
	{
		temp = temp->next;
	}
	node->next = temp->next;
	temp->next = node;
	++count;
}

Node*& LinkedList::extractNode(int index)
{
	if (!indexValid(index))
	{
		return new Node();
	}
	if (index == 0)
	{
		Node* res = head;
		head = head->next;
		res->next = nullptr;
		--count;
		return res;
	}
	Node* temp = head;
	for (int i = 0; i < index - 1; ++i)
	{
		temp = temp->next;
	}
	Node* res = temp->next;
	temp->next = temp->next->next;
	--count;
	res->next = nullptr;
	return res;
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		popHead();
	}
}

void LinkedList::pushHead(int element)
{
	/*
	Node* newhead = new Node();
	newhead->data = element;
	newhead->next = this->head;
	head = newhead;
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;*/
	head = new Node(element, head);
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;
}

void LinkedList::pushTail(int element)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}
	tail->next = new Node(element);
	tail = tail->next;
	++count;
}

void LinkedList::insert(int element, int index)
{
	if (!indexValid(index))
	{
		return;
	}
	insertNode(new Node(element), index);
}

int LinkedList::extract(int index)
{
	if (!indexValid(index))
	{
		return 0;
	}
	Node* temp = extractNode(index);
	int res = temp->data;
	delete temp;
	return res;
}

void LinkedList::swap(int index1, int index2)
{
	if (!indexValid(index1) || !indexValid(index2) || (index1 == index2))
	{
		return;
	}
	if (index1 > index2)
	{
		return swap(index2, index1);
	}
	Node* node2 = extractNode(index2);
	Node* node1 = extractNode(index1);
	insertNode(node2, index1);
	insertNode(node1, index2);
}

int LinkedList::popHead()
{
	if (head == nullptr)
	{
		return 0;
	}
	--count;
	Node* temp = head;
	int value = head->data;
	head = head->next;
	delete temp;
	if (head == nullptr)
	{
		tail = nullptr;
	}
	return value;
}

int LinkedList::popTail()
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (head == tail)
	{
		return popHead();
	}
	Node* temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	--count;
	int value = tail->data;
	delete tail;
	tail = temp;
	tail->next = nullptr;
	return value;
}
