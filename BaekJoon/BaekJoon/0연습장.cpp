#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int i, j, k, answer = 1;
	cin >> i >> j >> k;
	if (i % 2 == 1)
		answer *= i;
	if (j % 2 == 1)
		answer *= j;
	if (k % 2 == 1)
		answer *= k;

	if (answer == 1) {
		cout << i * j * k;
	}
	else {
		cout << answer;
	}
}