#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	for (int i = 0; i < 10; ++i)
	{
		cout << i << " ";
	}
	cout << endl;


	//goto
	{
	vasya:
		int i = 0;
		goto kolya;


	misha:
		cout << endl;
		goto vsyo;

	petya:
		++i;
		goto kolya;

	tanya:
		if (i < 10)
		{
			goto petya;
		}
		else
		{
			goto misha;
		}

	kolya:
		cout << i << " ";
		goto tanya;

	vsyo:
		;
	}


	return EXIT_SUCCESS;
}