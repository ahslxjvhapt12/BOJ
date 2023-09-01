#include <iostream>
#include <cmath>

using namespace std;

int arr[1000001];

void findPrimeNum(int m, int n)
{
	arr[0] = 1;
	arr[1] = 1;

	for (int i = 2; i < n + 1; i++) {

		for (int j = 2 * i; j < n + 1; j += i) {
			if (arr[j] == 0) {
				arr[j] = 1;
			}
		}
	}

	for (int i = m; i < n + 1; i++) {	
		if (arr[i] == 0)
			cout << i << '\n';
	}
}

int main()
{
	int m, n;
	cin >> m >> n;

	findPrimeNum(m, n);

	return 0;
}