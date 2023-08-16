#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	

	map<string, int> m;
	map<int, string> reverseM;

	int cnt, q;
	cin >> cnt >> q;
	string input;

	for (int i = 0; i < cnt; i++)
	{
		cin >> input;
		m[input] = i + 1;
		reverseM[i + 1] = input;
	}

	for (int i = 0; i < q; i++)
	{
		cin >> input;
		if (m.find(input) == m.end()) {
			cout << reverseM[stoi(input)];
		}
		else {
			cout << m[input];
		}
		cout << "\n";
	}
	return 0;
}