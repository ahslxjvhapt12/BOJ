#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	long long a, b, v, cnt = 0;

	cin >> a >> b >> v;

	cout << (v - a) / (a - b) - 1;

}