#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream fin("in.txt");
	ofstream fout("out.txt");

	int a = 0;
	int sum = 0;
	while(!fin.eof())
	{
		fin >> a;
		sum += a;
	}
	fout << sum;

	fout.close();
	fin.close();
	return 0;
}