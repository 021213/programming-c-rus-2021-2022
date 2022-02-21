#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>

using namespace std;

typedef unsigned long long ulong;

void randomizeArray(ulong* a, int length, int start = 10, int end = 99)
{
	for (int i = 0; i < length; ++i)
	{
		a[i] = rand() % (end - start + 1) + start;
	}
}

void printArray(ulong* a, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << endl;
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

bool isSorted(ulong* a, int length)
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

void swap(ulong& a, ulong& b)
{
	int c = a;
	a = b;
	b = c;
}

void mixArray(ulong* a, int length)
{
	for (int i = 0; i < length; ++i)
	{
		swap(a[i], a[rand() % length]);
	}
}

void monkeySort(ulong* a, int length)
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

void linearSort(ulong* a, int length)
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

void bubbleSort(ulong* a, int length)
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

ulong getBit(ulong a, int bitCount)
{
	/*
	1101 1111_2, 2
	1101 1111_2 << 5
	1110 0000_2 >> 7
	0000 0001_2
	*/
	ulong bit = a << (8 * sizeof(ulong) - 1 - bitCount);
	bit = bit >> (8 * sizeof(ulong) - 1);
	return bit;
}

int getDigit(ulong a, int base, int bit)
{
	for (int i = 0; i < bit; ++i)
	{
		a /= base;
	}
	a %= base;
	return (int)a;
}

void digitalSort(ulong* a, int length)
{
	ulong* buffer = new ulong[length];
	for (int bit = 0; bit < sizeof(ulong) * 8; ++bit)
	{
		int count = 0;
		for (int i = 0; i < length; ++i)
		{
			count += getBit(a[i], bit);
		}
		int index[2]{ 0, length - count };
		//int index0 = 0;
		//int index1 = length - count;
		for (int i = 0; i < length; ++i)
		{
			buffer[index[getBit(a[i], bit)]++] = a[i];
			/*if (getBit(a[i], bit) == 0)
			{
				buffer[index0++] = a[i];
			}
			else
			{
				buffer[index1++] = a[i];
			}
			*/
		}
		ulong* temp = buffer;
		buffer = a;
		a = temp;
	}
	delete[] buffer;
}

void digitalSort(ulong* a, int length, int base)
{
	ulong* buffer = new ulong[length];
	int* index = new int[base]{ 0 };
	for (int bit = 0; bit < 10; ++bit)
	{
		for (int i = 0; i < base; ++i)
		{
			index[i] = 0;
		}
		for (int i = 0; i < length; ++i)
		{
			++index[getDigit(a[i], base, bit)];
		}
		int sum = 0;
		for (int i = 0; i < base; ++i)
		{
			int temp = sum;
			sum += index[i];
			index[i] = temp;
		}
		for (int i = 0; i < length; ++i)
		{
			buffer[index[getDigit(a[i], base, bit)]++] = a[i];
		}
		ulong* temp = buffer;
		buffer = a;
		a = temp;
	}
	delete[] index;
	delete[] buffer;
}

int main()
{
	srand(time(0));
	int n = 0;
	cin >> n;
	ulong* a = new ulong[n] { 0 };
	randomizeArray(a, n);
	printArray(a, n);
	digitalSort(a, n, 10);
	printArray(a, n);
	delete[] a;
	return EXIT_SUCCESS;
}