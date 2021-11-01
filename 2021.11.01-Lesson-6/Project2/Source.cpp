#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 5;
	int* p = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; ++i)
	{
		*(p + i) = rand() % 10; //p[i] = rand() % 10
	}

	for (int i = 0; i < n; ++i)
	{
		cout << (p + i) << "->" << *(p + i) << endl;
	}

	free(p);
	return EXIT_SUCCESS;
}
