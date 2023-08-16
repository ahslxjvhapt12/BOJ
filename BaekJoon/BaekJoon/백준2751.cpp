#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	

	
	int n;
	cin >> n;
	int* arr = new int[n];

	int input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}
}