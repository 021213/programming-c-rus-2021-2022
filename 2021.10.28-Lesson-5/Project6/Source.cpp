#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	float f = 5.25f;
	int value = *((int*)&f);
	//вывести float побитово.
	for (int i = 0; i < sizeof(int) * 8; ++i)
	{
		int currentBit = (sizeof(int) * 8 - 1 - i);
		int bitMask = 1 << currentBit;
		//             5.25f   = 0100 0000 1010 1000 0000 0000 0000 0000
		//             1       = 0000 0000 0000 0000 0000 0000 0000 0001
		//             1 << 31 = 1000 0000 0000 0000 0000 0000 0000 0000
		//             1 << 30 = 0100 0000 0000 0000 0000 0000 0000 0000
		//             1 << 29 = 0010 0000 0000 0000 0000 0000 0000 0000
		//             1 << 28 = 0001 0000 0000 0000 0000 0000 0000 0000
		int bit = value & bitMask;
		bit = bit >> currentBit;
		cout << bit;
		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}