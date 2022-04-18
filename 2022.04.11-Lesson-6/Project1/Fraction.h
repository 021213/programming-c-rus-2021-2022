#pragma once
#include<ostream>
#include<cmath>
class Fraction
{
private:
	long long numerator;
	long long denominator;
	long long gcd(long long a, long long b);

public:
	Fraction(long long numerator = 0, long long denominator = 1);
	Fraction(const Fraction& fraction) : numerator(fraction.numerator), denominator(fraction.denominator) {};
	~Fraction() {}

	long long getNumerator();
	
	long long getDenominator();

	void setNumerator(long long numerator);

	void setDenominator(long long denominator);

	void set(long long numerator, long long denominator);

	Fraction& operator=(const Fraction& fraction);
	bool operator==(Fraction& fraction);
	bool operator>=(Fraction& fraction);
	bool operator<=(Fraction& fraction);
	bool operator>(Fraction& fraction);
	bool operator<(Fraction& fraction);

	friend Fraction operator+(Fraction& fr1, Fraction& fr2);
	friend Fraction operator+(Fraction& fr1, long long& ll);
	//операторы сложения, умножения на число, умножения на Fraction, вычитания, нахождения противоположенного числа

	friend std::ostream& operator<<(std::ostream& stream, const Fraction& fraction);
};