#include<iostream>
#include<string>
using namespace std;

int main() {

	string str;
	cin >> str;

	for (int i = 0; i < 'z' - 'a' + 1; i++)
	{
		for (int j = 0; j < str.length(); j++)
		{
			if ('a' + i == str[j]) {
				cout << j << ' ';
				break;
			}
			if (j == str.length() - 1) cout << -1 << ' ';
		}
	}

	return 0;
}