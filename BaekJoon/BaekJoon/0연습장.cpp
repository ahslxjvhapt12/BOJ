#include <iostream>

using namespace std;

int dp[12] = { 0, 1, 2 ,4 ,7 };

int DP(int n) {
	if (dp[n] != 0) return dp[n];
	dp[n] = DP(n - 1) + DP(n - 2) + DP(n - 3);
	return dp[n];
}

int main() {
	int repeat;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		int n;
		cin >> n;
		cout << DP(n) << '\n';
	}
}