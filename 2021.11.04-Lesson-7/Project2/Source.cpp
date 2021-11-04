#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

using namespace std;

int main(int argc, char* argv[])
{
	bool exiting = false;
	while (!exiting)
	{
		char c = _getch();

		printf("INPUTED : %c %d\n", c, c);

		if (c == 27)
		{
			exiting = true;
		}
	}

	return 0;
}
