#include <iostream>
using namespace std;
void swap(int& a, int& b);

int main()
{
	int a = 100, b = 200;

	printf("a=%d b=%d\n", a, b);
	swap(a, b);
	printf("a=%d b=%d\n", a, b);	
	return 0;
}

void swap(int &a, int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
