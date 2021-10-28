#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b >> c;

	c = a + c + b - 2 * (a + b - 3 * a);
	
	if (a > 4) cout << a;

	if (a > 4)
	{
		cout << a;
	}
	else
	{
		cout << a + 4;
	}

	cout << (a > 4 ? a : a + 4);

	return EXIT_SUCCESS;
}