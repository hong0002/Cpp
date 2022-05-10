#include "Counter.h"
#include "MyVector.h"
#include <iostream>
using namespace std;

int main()
{
	Counter c;
	cout << "카운터의 값: " << c.getValue() << endl;
	++c;
	cout << "카운터의 값: " << c.getValue() << endl;

	MyVector v1(1.0, 2.0);
	cout << "벡터의 값" << v1.toString() << endl;
	v1++;
	cout << "벡터의 값" << v1.toString() << endl;

	return 0;
}
