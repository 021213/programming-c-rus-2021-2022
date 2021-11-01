#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
	//арифметика указателей
	int* p = (int*)malloc(sizeof(int));

	*p = 4;
	cout << &p << " " << p << " " << *p << endl;

	free(p);
	return EXIT_SUCCESS;
}