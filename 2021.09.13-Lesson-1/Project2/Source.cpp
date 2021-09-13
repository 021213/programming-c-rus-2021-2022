#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{

	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << "input a and b" << endl;
	cin >> a >> b;
	c = a + b;
	cout << a << " + " << b << " = " << c << endl;

	return EXIT_SUCCESS;
}