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

	int nbit = (a & (1 << n)) >> n; //value of n bit  -> & 00000000000100000000
	a = a & (~(1 << n)); //erasing n bit
	int mbit = (a & (1 << m)) >> m; //value of m bit
	a = a & (~(1 << m)); //erasing m bit  -> & 1111111111101111111
	a = a | (nbit << m) | (mbit << n);

	cout << a << endl;
	return EXIT_SUCCESS;
}
