#include<iostream>
#include<clocale>

using namespace std;

void printMenu()
{
	cout << "0. Выход из программы." << endl;
	cout << "1. Вывод текущего состояния массива." << endl;
	cout << "2. Добавить элемент в конец массива. Если capacity не хватает, оно должно умножиться на 2." << endl;
	cout << "3. Добавить элемент в начало массива." << endl;
	cout << "4. Удалить элемент из конца массива." << endl;
	cout << "5. Удалить элемент из начала массива." << endl;
	cout << "6. Развернуть массив. Элементы массива должны встать в обратном порядке." << endl;
	cout << "Choose your destiny : " << endl;
}

void printArray(int* a, int count)
{
	for (int i = 0; i < count; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void expandArray(int*& a, int& capacity)
{
	int* newArray = new int[capacity + 2];
	for (int i = 0; i < capacity; ++i)
	{
		newArray[i] = a[i];
	}
	delete[] a;
	a = newArray;
	capacity += 2;
}

void swap(int& a, int& b)
{
	a ^= b ^= a ^= b;
}

void processChoice(int choice, int*& a, int& capacity, int& count)
{
	switch (choice)
	{
	case 1:
		printArray(a, count);
		break;
	case 2:
	{
		if (capacity == count)
		{
			expandArray(a, capacity);
		}
		int element = 0;
		cout << "input element to end: ";
		cin >> element;
		a[count] = element;
		++count;
	}
	break;
	case 3:
	{
		if (capacity == count)
		{
			expandArray(a, capacity);
		}
		int element = 0;
		cout << "input element to start: ";
		cin >> element;
		for (int i = count; i > 0; --i)
		{
			a[i] = a[i - 1];
		}
		a[0] = element;
		++count;
	}
	break;
	case 4:
		if (count > 0)
		{
			--count;
		}
		break;
	case 5:
		if (count > 0)
		{
			for (int i = 0; i < count - 1; ++i)
			{
				a[i] = a[i + 1];
			}
			--count;
		}
		break;
	case 6:
		for (int i = 0; i < count / 2; ++i)
		{
			swap(a[i], a[count - i - 1]);
		}
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int count = 0;
	int capacity = 10;
	int* a = new int[capacity];
	do
	{
		system("cls");
		printMenu();
		int choice = 0;
		cin >> choice;
		if (choice == 0)
		{
			break;
		}
		processChoice(choice, a, capacity, count);
		system("pause");
	} while (true);
	delete[] a;
	return EXIT_SUCCESS;
}