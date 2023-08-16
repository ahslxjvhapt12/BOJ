#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	while (true)
	{
		cin >> a >> b >> c;

		if (!a && !b && !c) break;

		if (b > a) {
			int temp = a;
			a = b;
			b = temp;
		}
		if (c > a) {
			int temp = c;
			c = a;
			a = temp;
		}
		if (a * a == b * b + c * c) {
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}
	}
}