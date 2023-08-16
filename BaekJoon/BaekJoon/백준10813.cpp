#include <iostream>

using namespace std;

int main() {
	int n, count, first, second;
	cin >> n >> count;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < count; i++)
	{
		cin >> first >> second;
		first--;
		second--;
		int temp = arr[first];
		arr[first] = arr[second];
		arr[second] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
}