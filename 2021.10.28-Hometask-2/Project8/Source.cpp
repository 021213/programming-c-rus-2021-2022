#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;
	if (a < b)
	{
		int t = a;
		a = b;
		b = t;
	}
	if (a < c)
	{
		int t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		int t = c;
		c = b;
		b = t;
	}

	if (a * a > b * b + c * c)
	{
		cout << "obtuse";
	}
	else
	{
		if (a * a < b * b + c * c)
		{
			cout << "accute";
		}
		else
		{
			cout << "right";
		}
	}
	return EXIT_SUCCESS;
}