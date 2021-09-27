#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int a = 0;
	cin >> a;
	cout << "The next number after number " << a << " is " << a + 1 << endl;
	cout << "The previous number after number " << a << " is " << a - 1 << endl;
	return EXIT_SUCCESS;
}