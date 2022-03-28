#include "Vector3D.h"

Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

Vector3D::Vector3D(const Vector3D& vector) : x(vector.x), y(vector.y), z(vector.z) {}

Vector3D::~Vector3D()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

double Vector3D::getX()
{
	return this->x;
}

void Vector3D::setX(double x)
{
	this->x = x;
}

double Vector3D::getY()
{
	return this->y;
}

void Vector3D::setY(double y)
{
	this->y = y;
}

double Vector3D::getZ()
{
	return this->z;
}

void Vector3D::setZ(double z)
{
	this->z = z;
}

void Vector3D::set(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Vector3D::print()
{
	std::cout << "{" << this->x << "; " << this->y << "; " << this->z << "}" << std::endl;
}

Vector3D& Vector3D::operator=(const Vector3D& vector)
{
	this->x = vector.x;
	this->y = vector.y;
	this->z = vector.z;
	return *this;
}

Vector3D Vector3D::operator-()
{
	return Vector3D(-this->x, -this->y, -this->z);
}

Vector3D& Vector3D::operator+=(const Vector3D& vector)
{
	this->x += vector.x;
	this->y += vector.y;
	this->z += vector.z;
	return *this;
}

Vector3D Vector3D::operator+(const Vector3D& vector)
{
	return Vector3D(this->x + vector.x, this->y + vector.y, this->z + vector.z);
}

Vector3D operator*(const double mult, const Vector3D& vector)
{
	return Vector3D(vector.x * mult, vector.y * mult, vector.z * mult);
}

Vector3D operator*(const Vector3D& vector, const double mult)
{
	return Vector3D(vector.x * mult, vector.y * mult, vector.z * mult);
}

Vector3D operator+(const Vector3D& vector1, const Vector3D& vector2)
{
	return Vector3D(vector1.x + vector2.x, vector1.y + vector2.y, vector1.z + vector2.z);
}

Vector3D operator-(const Vector3D& vector1, const Vector3D& vector2)
{
	return Vector3D(vector1.x - vector2.x, vector1.y - vector2.y, vector1.z - vector2.z);
}

double DotProduct(const Vector3D& v1, const Vector3D& v2)
{
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

std::ostream& operator<<(std::ostream& stream, const Vector3D& vector)
{
	stream << "{" << vector.x << "; " << vector.y << "; " << vector.z << "}";
	return stream;
}

Vector3D operator*(const Vector3D& v1, const Vector3D& v2)
{
	return Vector3D(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x);
}
