#include <iostream>
using namespace std;

int main()
{
	int arr[8][9];

	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			arr[i - 2][j - 1] = i * j;
		}
	}

	for (int i = 0; i < 8; i++)
	{
		for (auto& j : arr[i])
		{
			cout << j << ", ";
		}
		cout << endl;
	}

	return 0;
}
