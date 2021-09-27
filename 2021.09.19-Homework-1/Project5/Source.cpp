#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int a = 0;
	cin >> a;
	cout << a % 10 + a / 10 % 10 + a / 100 % 10;
	return EXIT_SUCCESS;
}