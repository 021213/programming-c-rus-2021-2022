#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	cout << a << b << endl;
	a ^= b ^= a ^= b;
	cout << a << b << endl;
	return EXIT_SUCCESS;
}