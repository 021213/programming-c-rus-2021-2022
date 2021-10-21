#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	//массивы
	int a[3] = { 0 };
	/*
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	*/

	for (int i = 0; i < 3; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	int b[5] = { 4, 2, 3 };
	for (int i = 0; i < 5; ++i)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	int c[5] = { 4, 2, 3, 9, 5 };
	for (int i = 0; i < 5; ++i)
	{
		cout << c[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}