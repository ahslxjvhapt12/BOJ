#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v = { 1,1,1,2,2 };

	v.resize(101);

	for (int i = 5; i < 100; i++)
	{
		v[i] = v[i - 1] + v[i - 5];
	}

	int n;
	cin >> n;
	cout << v[n - 1];
}