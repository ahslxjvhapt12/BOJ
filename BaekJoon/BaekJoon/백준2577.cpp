#include <iostream>
#include <string>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	int arr[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	long long num = a * b * c;
	string str = to_string(num);

	for (int i = 0; i < str.size(); i++)
	{
		arr[str[i] - '0']++;
	}


	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}