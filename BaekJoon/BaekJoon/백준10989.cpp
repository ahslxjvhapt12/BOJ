#include<iostream>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num;
	cin >> num;
	int a[10001] = { 0 };

	for (int i = 0; i < num; i++) {
		int b;
		cin >> b;
		a[b]++;
	}

	for (int i = 1; i < 10001; i++) {
		while (a[i]--) {
			cout << i << '\n';
		}
	}
}