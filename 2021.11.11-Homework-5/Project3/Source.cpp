#include<iostream>

using namespace std;

typedef unsigned long long ulong;

int main(int argc, char* argv[])
{
	cout << sizeof(int) << endl;
	//4 ����� = 32 ����. ����� ������� 2^32 �����
	//    0 .. 2^32-1
	//-2^31 .. 2^31 - 1
	unsigned int a = ~0;
	int b = ~0;
	cout << a << " " << b << endl;
	ulong ul;

	return EXIT_SUCCESS;
}
