#include <iostream>
using namespace std;

int main()
{
	int x, y;
	char arr[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			arr[i][j] = ' ';
	}

	for (int i = 0; i < 9; i++)
	{
		cout << "(x, y) 좌표: ";
		cin >> x >> y;
		
		arr[x][y] = (i % 2 == 0) ? 'X' : 'O';
		cout << "---|---|---" << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << " " << arr[j][0] << " | " << arr[j][1] << " | " << arr[j][2] << endl;
			cout << "---|---|---" << endl;
		}
	}
	return 0;
}
