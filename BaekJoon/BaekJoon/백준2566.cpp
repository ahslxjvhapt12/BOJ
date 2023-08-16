#include<iostream>
using namespace std;

int main() {
	int arr[9][9] = {};
	int max = -1, x = 0, y = 0, input = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> input;
			arr[i][j] = input;
			if (input > max) {
				max = input;
				x = i;
				y = j;
			}
		}
	}
	cout << max << endl;
	cout << x + 1 << " " << y + 1;
}