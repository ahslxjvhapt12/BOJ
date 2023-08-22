#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	long long a, b, v, cnt = 0;

	cin >> a >> b >> v;

	cout << (v - a) / (a - b) - 1;

	//while (true)
	//{
	//	cnt++;
	//	v -= a;
	//	if (v <= 0) break;
	//	v += b;
	//}
	//cout << cnt;
	//return 0;
}