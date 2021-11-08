#include<iostream>

using namespace std;

void randomize(int* arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		arr[i] = rand() % 10;
	}
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
	int* a = new int[n] { 0 };

	randomize(a, n);
	print(a, n);
	print(a, n);
	print(a, n);
	print(a, n);

	delete[] a;
	return EXIT_SUCCESS;
}