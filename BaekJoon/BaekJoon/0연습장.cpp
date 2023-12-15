#include <iostream>

using namespace std;

int dp[1001] = { 0, 1, 3 };

int DP(int n) {
	if (n <= 0) return 0;
	if (n == 1) return 1;
	if (n == 2) return 3;

	if (dp[n] != 0) return dp[n];

	dp[n] = (DP(n - 1) + DP(n - 2) * 2) % 10007;
	return dp[n];
}

int main() {
	int n;
	cin >> n;
	cout << DP(n);
}