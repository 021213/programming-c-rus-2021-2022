#pragma once
#include<iostream>

class Vector3D
{
private:
	double x;
	double y;
	double z;

public:
	Vector3D(double x = 0, double y = 0, double z = 0);
	Vector3D(const Vector3D& vector);
	~Vector3D();

	double getX();
	void setX(double x);
	double getY();
	void setY(double y);
	double getZ();
	void setZ(double z);
	void set(double x, double y, double z);

	void print();


	Vector3D& operator=(const Vector3D& vector);
	Vector3D operator-();
	Vector3D& operator+=(const Vector3D& vector);

	Vector3D operator+(const Vector3D& vector);
	friend Vector3D operator*(const double mult, const Vector3D& vector);
	friend Vector3D operator*(const Vector3D& vector, const double mult);
	friend Vector3D operator*(const Vector3D& vector1, const Vector3D& vector2);
	friend Vector3D operator+(const Vector3D& vector1, const Vector3D& vector2);
	friend Vector3D operator-(const Vector3D& vector1, const Vector3D& vector2);
	friend double DotProduct(const Vector3D& vector1, const Vector3D& vector2);
	friend std::ostream& operator<<(std::ostream& stream, const Vector3D& vector);
};

