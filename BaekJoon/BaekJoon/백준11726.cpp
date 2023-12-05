#include <iostream>

using namespace std;

int dp[1001] = { 1, 1 };

int DP(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;

	if (dp[n] != 0) return dp[n];

	dp[n] = (DP(n - 1) + DP(n - 2)) % 10007;

	return dp[n];
}

int main() {
	int input;
	cin >> input;
	cout << DP(input);
}