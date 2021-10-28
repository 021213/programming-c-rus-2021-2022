#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	//вещественные типы данных
	float varFloat = 0;
	varFloat = 5.2f;
	varFloat = 5.2;


	double varDouble = 0;
	varDouble = 5.2;
	varDouble = (double)5.2f;

	int varInt = 0;
	varInt = (int)varDouble;

	varInt = 5.23;
	cout << varInt << endl;

	cout << "DOUBLE " << sizeof(double) << endl;
	cout << "FLOAT " << sizeof(float) << endl;
	cout << "LONG DOUBLE " << sizeof(long double) << endl;


	varDouble = 0;
	for (int i = 0; i < 1000000; ++i)
	{
		varDouble += 0.000001;
	}
	cout << varDouble << endl;

	varFloat = 0;
	for (int i = 0; i < 1000000; ++i)
	{
		varFloat += 0.000001;
	}
	cout << varFloat << endl;

	varDouble = 5.25;
	varDouble = (double)5.25f;
	return EXIT_SUCCESS;
}