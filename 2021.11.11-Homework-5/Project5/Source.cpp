#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int choice = 0;
	int count = 0;
	int capacity = 3;
	int* a = new int[capacity] { 0 };
	int element = 0;
	do
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "[" << count << "/" << capacity << "] : ";
			for (int i = 0; i < count; ++i)
			{
				cout << a[i] << " ";
			}
			cout << endl;
			break;
		case 2:
			cin >> element;
			if (count == capacity)
			{
				int* temp = new int[capacity * 2]{ 0 };
				for (int i = 0; i < capacity; ++i)
				{
					temp[i] = a[i];
				}
				delete[] a;
				a = temp;
				capacity *= 2;
			}
			a[count] = element;
			++count;
			break;
		}
	} while (choice != 0);
	return EXIT_SUCCESS;
}