#include<iostream>
#include<cstdlib>

using namespace std;

struct Array {

	int length;
	int* data;

	Array(int llength = 10)
	{
		length = llength;
		data = new int[length] { 0 };
	}

	Array(Array& arr)
	{
		length = arr.length;
		data = new int[length];
		for (int i = 0; i < length; ++i)
		{
			data[i] = arr.data[i];
		}
	}
	~Array()
	{
		length = 0;
		delete[] data;
		data = nullptr;
	}
};

void print(Array arr)
{
	cout << "(" << arr.length << ") ";
	for (int i = 0; i < arr.length; ++i)
	{
		cout << arr.data[i] << " ";
	}
	cout << endl;	
}

int main()
{
	Array a;
	for (int i = 0; i < a.length; ++i)
	{
		a.data[i] = rand() % 10;
	}
	print(a);
	print(a);
	print(a);
	print(a);
	return EXIT_SUCCESS;
}