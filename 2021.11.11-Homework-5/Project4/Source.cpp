#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int size = sizeof(int) * 8;

	cin >> a;

	int sign = a >> (size - 1);
	int invsign = (1 + sign) % 2; // invsign = (int)(!(bool)sign)
	int nega = ~a + 1;

	double f = 0;
	cin >> f;
	int n = 12;
	long long value = *((long long*)&f);
	long long currentBit = (sizeof(double) * 8 - 1);
	long long k = 1;
	long long bitMark = k << currentBit;
	long long bit = ~value;
	bit = (bit | bitMark);
	long long b1 = ~bit;
	double answer = *((double*)&b1);
	cout << setprecision(n);
	cout << answer;

	return EXIT_SUCCESS;
}
