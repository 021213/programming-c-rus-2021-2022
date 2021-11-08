#include<iostream>

using namespace std;

void swap(int& aa, int& bb)
{
	int t = aa;
	aa = bb;
	bb = t;
}

int main(int argc, char* argv)
{
	//передача параметров по ссылке
	int a = 10;
	int b = 15;
	cout << a << " " << b << endl;
	swap(a, b);
	cout << a << " " << b << endl;
	return EXIT_SUCCESS;
 }