#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
	map<string, int> iq;
	iq["misha"] = 52;
	iq["kolya"] = 39;
	int a[1000]{ 0 };

	for (char c = 'a'; c < 'z'; ++c)
	{
		a[c] = rand() % 42;
	}

	return EXIT_SUCCESS;
}