#include<iostream>

using namespace std;

int main() {
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	if (n1 > n2) {
		int temp = n2;
		n2 = n1;
		n1 = temp;
	}

	if (n2 > n3) {
		int temp = n3;
		n3 = n2;
		n2 = temp;
	}

	if (n1 > n2) {
		int temp = n2;
		n2 = n1;
		n1 = temp;
	}
	if (n1 == n2 && n2 == n3) {
		cout << 10000 + n1 * 1000;
	}
	else if (n1 == n2) {
		cout << 1000 + n1 * 100;
	}
	else if (n2 == n3) {
		cout << 1000 + n2 * 100;
	}
	else if (n1 == n3) {
		cout << 1000 + n1 * 100;
	}
	else {
		cout << n3 * 100;
	}
}