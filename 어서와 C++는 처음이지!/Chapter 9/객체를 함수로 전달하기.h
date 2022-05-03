#pragma once
#include <iostream>
using namespace std;

class Complex
{
public:
	double real, imag;
	Complex(double r = 0.0, double i = 0.0) : real{r}, imag{i}
	{
		cout << "생성자 호출";
		print();
	}
	~Complex() { cout << "소멸자 호출"; print(); }
	void print()
	{
		cout << real << "+" << imag << "i" << endl;
	}

};
