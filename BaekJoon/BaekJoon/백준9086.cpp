#include <iostream>
#include <string>

using namespace std;
int main() {
	int n;
	cin >> n;
	string str;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		cout << str[0];
		cout << str.back() << endl;
	}
	return 0;
}