#include<iostream>
#include<ctime>
#include<cstdlib>

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

int main()
{
	srand(time(0));
	int n = 0;
	cin >> n;
	int* a = new int[n] { 0 };
	randomizeArray(a, n);
	printArray(a, n);

	while (!isSorted(a, n))
	{
		mixArray(a, n);
	}

	printArray(a, n);

	delete[] a;
	return EXIT_SUCCESS;
}