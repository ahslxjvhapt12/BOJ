#include<iostream>
using namespace std;

int memo[10];

int factorial(int arg)
{
	if (arg == 1 || arg == 0) return 1;
	else {
		if (memo[arg] > 0) return memo[arg];
		memo[arg] = arg * factorial(arg - 1);
		return arg * factorial(arg - 1);
	}
}

int binomial_coefficient(int n, int k)
{
	if (k < 0) return 0;
	if (k > n) return 0;

	return factorial(n) / (factorial(k) * factorial(n - k));
}

int main(void)
{
	int n, k;
	cin >> n >> k;

	cout << binomial_coefficient(n, k) << "\n";

	return 0;
}