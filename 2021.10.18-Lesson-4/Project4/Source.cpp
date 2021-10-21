#include<iostream>
#include<cstdlib>
#include<ctime>
#define ARRLENGTH 20

using namespace std;

int main(int argc, char* argv[])
{
	//заполнение массива
	const int N = 10;

	int a[N] = { 0 };

	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < N; ++i)
	{
		a[i] = rand();
	}

	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	srand(time(0));
	int min = 10;
	int max = 99;
	for (int i = 0; i < N; ++i)
	{
		//в некоторых €зыках такое бывает
		//rand(5); 0..4 -> rand() % 5;
		//rand(4, 10); 4..10 -> rand() % 7 + 4
		a[i] = rand() % (max - min + 1) + min;
	}

	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	/*“ј  ƒ≈Ћј“№ Ќ≈Ћ№«я*/
	for (int i = 0; i < N; ++i)
	{
		a[i] = rand() % (max - min + 1) + min;
		cout << a[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}