#include "Fraction.h"

long long Fraction::gcd(long long a, long long b)
{
	while (a * b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return a + b;
}

Fraction::Fraction(long long numerator, long long denominator)
{
	this->set(numerator, denominator);
}

long long Fraction::getNumerator()
{
	return this->numerator;
}

long long Fraction::getDenominator()
{
	return this->denominator;
}

void Fraction::setNumerator(long long numerator)
{
	this->numerator = numerator;
}

void Fraction::setDenominator(long long denominator)
{
	if (denominator < 0)
	{
		this->setNumerator(-this->getNumerator());
		this->denominator = -denominator;
	}
	else
	{
		this->denominator = denominator;
	}
}

void Fraction::set(long long numerator, long long denominator)
{
	long long t = gcd(abs(numerator), abs(denominator));
	if (t != 0)
	{
		numerator /= t;
		denominator /= t;
	}
	this->setNumerator(numerator);
	this->setDenominator(denominator);
}

Fraction& Fraction::operator=(const Fraction& fraction)
{
	this->set(fraction.numerator, fraction.denominator);
	return *this;
}

bool Fraction::operator==(Fraction& fraction)
{
	return !(*this < fraction) && !(fraction < *this);
	//return (this->getNumerator() == fraction.getNumerator()) && (this->getDenominator() == fraction.getDenominator());
}

bool Fraction::operator>=(Fraction& fraction)
{
	return !(*this < fraction);
	//return (this->getNumerator() * fraction.getDenominator() >= this->getDenominator() * fraction.getNumerator());
}

bool Fraction::operator<=(Fraction& fraction)
{
	return !(fraction < *this);
	//return (this->getNumerator() * fraction.getDenominator() <= this->getDenominator() * fraction.getNumerator());
}

bool Fraction::operator>(Fraction& fraction)
{
	return (fraction < *this);
	//return (this->getNumerator() * fraction.getDenominator() > this->getDenominator() * fraction.getNumerator());
}

bool Fraction::operator<(Fraction& fraction)
{
	//if(this->getDenominator() == 0) ???
	//if(fraction.getDenominator() == 0) ???
	return (this->getNumerator() * fraction.getDenominator() < this->getDenominator() * fraction.getNumerator());
}

Fraction operator+(Fraction& fr1, Fraction& fr2)
{
	return Fraction(
		fr1.getNumerator() * fr2.getDenominator() + fr1.getDenominator() * fr2.getNumerator(),
		fr1.getDenominator() * fr2.getDenominator()
	);
}

Fraction operator+(Fraction& fr1, long long& ll)
{
	return Fraction(
		fr1.getNumerator() + fr1.getDenominator() * ll,
		fr1.getDenominator()
	);
}

std::ostream& operator<<(std::ostream& stream, const Fraction& fraction)
{
	if (fraction.denominator == 0)
	{
		if (fraction.numerator == 0 && fraction.denominator == 0)
		{
			stream << "undef";
			return stream;
		}

		if (fraction.numerator > 0)
		{
			stream << "+";
		}
		if (fraction.numerator < 0)
		{
			stream << "-";
		}
		if (fraction.denominator == 0)
		{
			stream << "inf";
			return stream;
		}

		stream << abs(fraction.numerator);
		stream << "/";
		stream << fraction.denominator;
	}
}
