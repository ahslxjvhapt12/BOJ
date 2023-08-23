#include <iostream>
using namespace std;

unsigned K, N;
unsigned lan[10000], minLan, maxLan; // --> (ll)2147483648 = (int)-2147483648

void solve()
{
	unsigned L, R, mid;
	L = 1, R = maxLan;
	while (L <= R) { // 방법 3에서는 while의 종료 조건 달라짐
		mid = (L + R) / 2;

		unsigned cnt = 0;
		for (int i = 0; i < K && cnt < N; ++i) cnt += lan[i] / mid;

		if (cnt < N) R = mid - 1;
		else L = mid + 1;
	}

	cout << --L; 
	cout << '\n';
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	cin >> K >> N;

	for (int i = 0; i < K; ++i) { // ~ 10^4
		cin >> lan[i];
		if (i == 0) minLan = lan[i];
		if (lan[i] > maxLan) maxLan = lan[i];
		if (lan[i] < minLan) minLan = lan[i];
	}

	solve();

	return 0;
}