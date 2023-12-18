#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, input, sum = 0;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; ++i)
	{
		sum += v[i] * (n - i);
	}
	cout << sum;
}