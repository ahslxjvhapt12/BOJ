#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, int>books;

	int max = 0;
	string mapKeys;
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> mapKeys;
		books[mapKeys]++;
	}

	for (auto a : books)
	{
		if (a.second >= max) {
			max = a.second;
		}
	}

	for (auto a : books)
	{
		if (a.second == max) {
			cout << a.first;
			break;
		}
	}
}