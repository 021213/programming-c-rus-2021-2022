#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const int N = 10;
	enum MYINDEX {
		kolya = 0,
		misha = 1,
		petya = 2,
		tanya = 3,
		katya = 4,
		banan = 7,
		ananas,
		apelsin
	};
	int vasya = 5;

	MYINDEX ind = kolya;

	int a[N] = { 0 };
	a[vasya] = 5;
	a[petya] = 9;
	a[apelsin] = 7;

	for (auto element : a)
	{
		cout << element << " ";
	}
	cout << endl;
	
	int matrix[4][4];

	return EXIT_SUCCESS;
}