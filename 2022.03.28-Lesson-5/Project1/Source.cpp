#include<iostream>
#include "Vector3D.h"

using namespace std;

double volume(Vector3D v1, Vector3D v2, Vector3D v3)
{
	v1 = v1 * v2;
	return DotProduct(v1, v3);
}

int main()
{
	Vector3D v1(3, 2, 2), v2(2, 3, 1), v3(-1, 2, 3);
	cout << "v1 = "; v1.print();
	cout << "v2 = "; v2.print();
	cout << "v3 = "; v3.print();

	v1 = v3;
	v1.print();

	v1 = v2 + v3;
	v1.print();

	v1 = v2 * 3;
	v1.print();

	v1 = 3 * v2;

	v1 = v2 * v3;

	v1.print();
	cout << DotProduct(v1, v2) << " " << DotProduct(v1, v3) << endl;

	int a = 2;
	int b = 3;
	int c = 7;
	cout << a << " " << b << " " << c << endl;
	a += b += c;
	cout << a << " " << b << " " << c << endl;

	v1.set(1, 1, 1);
	v2.set(1, 1, 1);
	v3.set(1, 1, 1);

	v1 += v2 += v3;

	cout << "v1 = " << v1 << endl;
	cout << "v2 = " << v2 << endl;
	cout << "v3 = " << v3 << endl;
	cout << "-v3 = " << -v3 << endl;

	return 0;
}