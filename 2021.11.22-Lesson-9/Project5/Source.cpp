#include<cstdio>

int main()
{
	double e = 2.718281828459045;
	double pi = 3.1415926535;
	//e + pi = ..;

	printf("%lf + %lf = %lf\n", e, pi, e + pi);

	printf("%c = %d\n", 'a', 'a');

	printf("%4d %09d\n", 12, 32);

	printf("%09.4lf + %09.4lf = %lf\n", e, pi, e + pi);

	int t = 57;
	printf("%x %o", t, t);

	scanf("%d", &t);

	return 0;
}