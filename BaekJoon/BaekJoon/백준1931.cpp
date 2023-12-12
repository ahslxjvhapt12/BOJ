#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, input1, input2, cnt = 0;
	int lastT = 0;
	vector<pair<int, int>> v;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input1 >> input2;
		v.push_back({ input2, input1 });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].second < lastT) continue;

		cnt++;
		lastT = v[i].first;
	}
	cout << cnt;
}