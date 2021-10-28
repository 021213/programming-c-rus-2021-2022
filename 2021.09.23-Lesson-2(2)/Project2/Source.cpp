#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int a = 0;
	int b = 4;

	a = a + b;
	a += b;

	a++;
	++a;

	b = 1;
	b = b++ + ++b + ++b + b++;
	//  1       3     4   4
	cout << b << endl;

	b = 1;
	b = ++b;
	cout << b << endl;

	b = b++;
	cout << b << endl;

	return EXIT_SUCCESS;
}