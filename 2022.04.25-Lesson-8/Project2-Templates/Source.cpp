#include<iostream>

using namespace std;

template<typename K, typename V>
class mypair
{
public:
	K first;
	V second;

	mypair(K first, V second) : first(first), second(second) {}
	mypair() : first(K()), second(V()) {}
	mypair(const mypair<K, V>& p) : first(p.first), second(p.second) {}
	~mypair() {}
};

int main()
{
	mypair<int, double> id(4, 2.7);
	cout << id.first << " " << id.second << endl;
	id.first = 4;
	id.second = 5.3;
	cout << id.first << " " << id.second << endl;
	mypair<int, double> id2;
	cout << id2.first << " " << id2.second << endl;

	return 0;
}