#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	vector <pair<int, string>> v;

	int input;
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		int age;
		string name;
		cin >> age >> name;
		v.push_back(make_pair(age, name));
	}

	stable_sort(v.begin(), v.end(), compare);

	for (auto item : v)
	{
		cout << item.first << ' ' << item.second << "\n";
	}
	return 0;
}