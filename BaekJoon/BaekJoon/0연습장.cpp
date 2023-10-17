#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(vector<int>& arr, int len, int target) {
	int left = 0, right = len - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (target == arr[mid])	return 1;

		if (target < arr[mid]) {
			right = mid - 1;
		}
		else if (target > arr[mid]) {
			left = mid + 1;
		}
	}
	return 0;
}

int main() {
	int n;
	int input;
	vector<int> v;
	cin >> n;

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
		cout << binary_search(v, v.size(), input) << '\n';
	}
}