#include<iostream>

using namespace std;

int main() {
	int a, b, count = 0, result;
	cin >> a;
	b = a;
	while (true)
	{
		if (b % 5 != 0) {
			b -= 3;
			count++;
		}
		else if (b % 5 == 0) {
			if (b / 5 == -1) {
				cout << -1;
				break;
			}
			result = b / 5;
			cout << count + result;
			break;
		}
	}
}