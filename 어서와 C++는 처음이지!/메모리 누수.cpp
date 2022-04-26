#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int* ptr;
	srand(time(NULL));
	

	while (1)
	{
		ptr = new int[10]; //while문 밖에 있으면 메모리 누수가 일어나지 않음, 밖에있으면 할당된 동적메모리 하나에 값을 바꿔가며 넣은 것
		for (int i = 0; i < 10; i++)
		{
			ptr[i] = rand();
		}
		for (int i = 0; i < 10; i++)
		{
			cout << ptr[i] << " ";
		}
		delete[] ptr; // while문 안에 new가 있을때 안넣으면 메모리 누수
	}

	
	cout << endl;
	return 0;
}
