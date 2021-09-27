#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	cin >> a;

	if (a > 0)//;
	{ //nice idea
		cout << a << endl;
	}

	if (a > 0) cout << a << endl; //bad idea

	return EXIT_SUCCESS;
}