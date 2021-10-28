#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	int i = a;
	while (i % d != c && i <= b)
	{
		++i;
	}
	for (; i <= b; i += c)
	{
		cout << i << " ";
	}
	return EXIT_SUCCESS;
}