#include<iostream>

using namespace std;

//���������
int main(int argc, char* argv[])
{
	//���� ������
	/*
	* ���������� - ������� � ������ ����������.
	* ��� ���������� - ������ ������������� ������ ����������.
	*/

	short varShort = 0;
	int varInt = 0;
	long varLong = 0;
	long long varLongLong = 0;

	cout << "SHORT : " << sizeof(short) << endl; //2 ����� = 16 ���
	// **** **** **** **** -> [-2^15; 2^15 - 1]
	// 2^16 = 65536
	cout << "INT : " << sizeof(int) << endl; // 4 �����
	cout << "LONG : " << sizeof(long) << endl; // 4 �����
	cout << "LONG LONG : " << sizeof(long long) << endl; // 8 �����
	//[-2^63 .. 2^63 - 1]

	/*           10_10  -> 1010_2
	*            10_10  -> 0000 0000 0000 1010
	*           ~10_10  -> 1111 1111 1111 0101
	*       1 + ~10_10  -> 1111 1111 1111 0110
	*           -10_10  -> 1111 1111 1111 0110 //�������������� ������ �����
	*                     10000 0000 0000 0000
	*  10_10 + (-10_10) -> 0000 0000 0000 0000
	*/

	int a = 5; // 0000 0000 0000 0101
	//��������� ����� ����� �� ��� ����
	a = a << 2;// 0000 0000 0001 0100
	a = 5;     // 0000 0000 0000 0101
	a = a >> 2;// 0000 0000 0000 0001
	// & | ^ - ��������� ���������� ���������

	unsigned short varUShort = 0; // [0 .. 2^16 - 1]
	unsigned int varUInt = 0;
	unsigned long varULong = 0;
	unsigned long long varULongLong = 0;

	return EXIT_SUCCESS;
}