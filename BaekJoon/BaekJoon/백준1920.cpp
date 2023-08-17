#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool binary_search(vector<int>& arr, int len, int target) {
	int low = 0, high = len - 1;

	while (low <= high) {
		int mid = (low + high) / 2;

		if (target == arr[mid])	return true;

		if (target < arr[mid]) {
			high = mid - 1;
		}
		else if (target > arr[mid]) {
			low = mid + 1;
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;

	int input;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end());

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		cout << (int)binary_search(v, v.size(), input) << '\n';
	}
}