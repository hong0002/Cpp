#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int arr[10];
	int max;

	for (auto& i : arr)
	{
		i = rand() % 100 + 1;
		cout << i << " ";
	}
	cout << endl;
	max = arr[0];
	for (auto& i : arr)
	{
		if (i > max)
			max = i;
	}
	cout << "최대값: " << max;

	return 0;

}
