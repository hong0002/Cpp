#include "Complex.h"

Complex add(Complex c1, Complex c2)
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}

int main()
{
	Complex c1{ 1,2 }, c2{ 3,4 };
	Complex t;
	t = add(c1, c2);
	t.print();

	return 0;
}
