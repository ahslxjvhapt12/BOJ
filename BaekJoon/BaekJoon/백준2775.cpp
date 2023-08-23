#include <iostream>

using namespace std;

int arr[15][15] = { 0, };

int main() {
	int t;
	cin >> t;

	for (int i = 1; i < 15; ++i) {
		arr[0][i] = i;
	}

	int k, n;
	for (int i = 0; i < t; ++i) {
		cin >> k >> n;

		for (int y = 1; y <= k; ++y) {
			for (int x = 1; x <= n; ++x) {
				if (arr[y][x]) continue;

				for (int j = 1; j <= x; ++j) {
					arr[y][x] += arr[y - 1][j];
				}
			}
		}
		cout << arr[k][n] << '\n';
	}

	return 0;
}