#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>

using namespace std;

void randomizeArray(int* a, int length, int start = 10, int end = 99)
{
	for (int i = 0; i < length; ++i)
	{
		a[i] = rand() % (end - start + 1) + start;
	}
}

void printArray(int* a, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << endl;
}

bool isSorted(int* a, int length)
{
	for (int i = 0; i < length - 1; ++i)
	{
		if (a[i] > a[i + 1])
		{
			return false;
		}
	}
	return true;
}

void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void mixArray(int* a, int length)
{
	for (int i = 0; i < length; ++i)
	{
		swap(a[i], a[rand() % length]);
	}
}

void monkeySort(int* a, int length)
{
	if (length > 7)
	{
		return;
	}
	while (!isSorted(a, length))
	{
		mixArray(a, length);
	}
}

void linearSort(int* a, int length)
{
	int counts[101]{ 0 };
	for (int i = 0; i < length; ++i)
	{
		++counts[a[i]];
	}
	for (int i = 0, index = 0; i < 101; ++i)
	{
		for (int j = 0; j < counts[i]; ++j, ++index)
		{
			a[index] = i;
		}
	}
}

void bubbleSort(int* a, int length)
{
	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < length - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}

int main()
{
	srand(time(0));
	int n = 0;
	cin >> n;
	int* a = new int[n] { 0 };
	randomizeArray(a, n);
	printArray(a, n);
	sort(a, a + n);
	printArray(a, n);

	delete[] a;
	return EXIT_SUCCESS;
}