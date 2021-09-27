#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 10;

	cout << "OUTER a : " << a << endl;
	{
		cout << "OUTER a : " << a << endl;
		a = 30;
		cout << "OUTER a : " << a << endl;
		int a = 20;
		cout << "INNER a : " << a << endl;
		a = 10;
		cout << "INNER a : " << a << endl;
	}
	cout << "OUTER a : " << a << endl;


	return EXIT_SUCCESS;
}