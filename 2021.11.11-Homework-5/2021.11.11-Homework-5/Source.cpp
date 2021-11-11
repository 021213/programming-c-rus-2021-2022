#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	/*
	239
	2
	8
	491
	*/
	int a = 0;
	int n = 0;
	int m = 0;
	cin >> a >> n >> m;

	int nbit = (a & (1 << n)) >> n; //value of n bit	-> & 00000000000100000000
	int mbit = (a & (1 << m)) >> m; //value of m bit	-> & 00000000000000000100
	a = a & (~(1 << n)); //erasing n bit				-> & 11111111111011111111
	a = a & (~(1 << m)); //erasing m bit				-> & 11111111111111111011
	a = a | (nbit << m) | (mbit << n);

	cout << a << endl;
	return EXIT_SUCCESS;
}
