#include<iostream>

using namespace std;

void expand(int*& arr, int& length, int dlength)
{
	int* newArr = new int[length + dlength]{ 0 };
	for (int i = 0; i < length; ++i)
	{
		newArr[i] = arr[i];
	}
	delete[] arr;
	arr = newArr;
	length += dlength;
}

void randomize(int* arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		arr[i] = rand() % 10;
	}
}

void randomize(int* arr, int from, int count)
{
	arr += from;
	randomize(arr, count);
}

void print(int* arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(int argc, char* argv)
{
	int n = 10;
	int* a = new int[n] {0};

	print(a, n);
	randomize(a, n);
	print(a, n);
	randomize(a, n);
	print(a, n);
	expand(a, n, 5);
	print(a, n);
	randomize(a, 10, 5);
	print(a, n);

	delete[] a;
	return EXIT_SUCCESS;
}