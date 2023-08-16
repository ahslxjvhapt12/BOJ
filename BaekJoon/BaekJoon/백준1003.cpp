#include <iostream>

using namespace std;

int t, N, dp[41][2];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = 1;

    for (int i = 2; i < 41; ++i) {
        dp[i][0] = dp[i - 2][0] + dp[i - 1][0];
        dp[i][1] = dp[i - 2][1] + dp[i - 1][1];
    }

    while (t--) {
        cin >> N;
        cout << dp[N][0] << " " << dp[N][1] << '\n';
    }

    return 0;
}