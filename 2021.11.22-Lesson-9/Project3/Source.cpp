#include<iostream>

using namespace std;

/*
1				
2		2				  1		  1
3 _ _	3 _ 1	3 2 1	3 2 _	_ 2 3	1 2 3

			1
	2		2
1 _ 3	_ _ 3
*/

void hanoy(int height, int from = 1, int to = 3)
{
	if (height == 0)
	{
		return;
	}
	int mid = 6 - to - from;

	hanoy(height - 1, from, mid);
	cout << height << " " << from << " " << to << endl;
	hanoy(height - 1, mid, to);
}

int main(int argc, char* argv[])
{
	hanoy(3);
	return EXIT_SUCCESS;
}