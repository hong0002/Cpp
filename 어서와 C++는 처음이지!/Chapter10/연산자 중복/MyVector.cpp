#include "MyVector.h"

MyVector MyVector::operator+(const MyVector& v2)
{
	MyVector v;
	v.x = this->x + v2.x;
	v.y = this->y + v2.y;
	return v;
}

// 전위 증감
MyVector &MyVector::operator++()
{
	++this->x;
	++this->y;
	return *this;
}

// 후위 증감
const MyVector MyVector::operator++(int i)
{
	MyVector temp = { *this };
	++this->x;
	++this->y;
	return temp;
}
