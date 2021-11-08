#include<iostream>

using namespace std;

int random(int a, int b)
{
	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}
	return rand() % (b - a + 1) + a;
}

int random(int a)
{
	return random(0, a);
}

int random(double a)
{
	return (double)random(0, 1000) / 1000 * a ;
}

int random()
{
	return random(0, 10);
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
	for (int i = 0; i < 10; ++i)
	{
		cout << random(5.0) << endl;
	}
	return EXIT_SUCCESS;
}