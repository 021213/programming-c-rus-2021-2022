#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 12;
	int b = 329;
	cout << a << " + " << b << " = " << a + b << endl;

	printf("%d + %d = %d\n", a, b, a + b);
	//%d - int
	//%ld - long
	//%f - float
	//%lf - double
	//%c - char
	//%s - string

	cout << "Bana\bna\" \\ \a \?" << endl;

	cout << "Banana \rnaB" << endl;
	cout << "Vasya\n\rPetrov" << endl;

	return EXIT_SUCCESS;
}