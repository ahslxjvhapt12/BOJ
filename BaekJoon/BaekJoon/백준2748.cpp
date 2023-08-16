#include <iostream>
using namespace std;

long long DP[91];

long long Fibo(int n) {
	if (DP[n] != 0)
		return DP[n];
	else if (n == 0)
		return 0;

	DP[n] = Fibo(n - 1) + Fibo(n - 2);
	return DP[n];
}

int main() {
	long long n;
	cin >> n;
	DP[0] = 0;
	DP[1] = 1;
	cout << Fibo(n);
}