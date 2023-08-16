#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, input;
	cin >> n >> m;
	int** arr1 = new int* [n];
	int** arr2 = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr1[i] = new int[m];
		arr2[i] = new int[m];
		for (int j = 0; j < m; j++) {
			cin >> input;
			arr1[i][j] = input;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cin >> input;
			arr2[i][j] = input;
			cout << arr1[i][j] + arr2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}