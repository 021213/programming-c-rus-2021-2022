#include<iostream>

using namespace std;

int random(int a = 0, int b = 10)
{
	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}
	/*
	a = 10; b = 99;
	length = b - a + 1;
	rand() - случайное число
	rand() % length = случайное число от 0 до length - 1 -> [0; length - 1];
	rand() % length + a = случайное число от 0 + a до length - 1 + a = b [a; a + length - 1] = [a; b]
	*/
	return rand() % (b - a + 1) + a;
}

int main(int argc, char* argv)
{
	for (int i = 0; i < 10; ++i)
	{
		cout << random(1, 5) << endl;
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << random(5) << endl;
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << random() << endl;
	}
	return EXIT_SUCCESS;
}