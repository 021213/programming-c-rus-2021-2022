#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	int c = a;
	a = b;
	b = c;
	cout << a << " " << b << endl;

	/*
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	a ^= b ^= a ^= b;

	a = a + b;
	b = a - b;
	a = a - b;
	*/
	return EXIT_SUCCESS;
}