#include<iostream>

using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int mult(int a, int b)
{
	return a * b;
}

int diff(int a, int b)
{
	return a - b;
}

int main()
{
	int (*func)(int, int);
	int a = 10;
	int b = 4;
	func = sum;
	cout << func(a, b) << endl;
	func = mult;
	cout << func(a, b) << endl;
	func = diff;
	cout << func(a, b) << endl;

	int (*funcArr[3])(int, int);
	funcArr[0] = sum;
	funcArr[1] = mult;
	funcArr[2] = diff;

	for (int i = 0; i < 3; ++i)
	{
		cout << funcArr[i](a, b) << endl;
	}

	return EXIT_SUCCESS;
}