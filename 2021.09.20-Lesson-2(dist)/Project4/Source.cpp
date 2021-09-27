#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	cin >> a;

	if ((a > 0) && (a < 10)) //and
	{
		cout << a << endl;
	}
	if ((a <= 3) || (a >= 8)) //or
	{
		cout << a << endl;
	}

	if ((a <= 3) ^ (a >= 8)) //or
	{
		cout << a << endl;
	}

	bool b = (a < 7);
	if (b == true || b == 1) //bad idea
	{
		cout << a << endl;
	}

	if (b) //good idea
	{
		cout << a << endl;
	}

	if (!b) //good idea
	{
		cout << a << endl;
	}

	return EXIT_SUCCESS;
}