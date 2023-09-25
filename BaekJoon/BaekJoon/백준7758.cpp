#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	map<string, string, greater<string>> m;
	int repeat;
	string key, value;

	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> key >> value;
		m[key] = value;
	}
	for (auto a : m)
	{
		if (a.second == "enter")
			cout << a.first << '\n';
	}
}