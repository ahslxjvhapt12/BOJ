#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	queue<int> s;
	int repeat = 0;
	cin >> repeat;
	string str;
	int input;
	for (int i = 0; i < repeat; i++) {
		cin >> str;
		if (str == "push") {
			cin >> input;
			s.push(input);
		}
		else if (str == "pop")
		{
			if (!s.empty())
			{
				cout << s.front() << "\n";
				s.pop();
			}
			else
			{
				cout << -1 << "\n";
			}
		}
		else if (str == "size")
		{
			cout << s.size() << "\n";
		}
		else if (str == "empty")
		{
			cout << s.empty() << "\n";
		}
		else if (str == "front") {

			if (!s.empty())
			{
				cout << s.front() << "\n";
			}
			else
			{
				cout << -1 << "\n";
			}
		}
		else if (str == "back")
		{
			if (!s.empty()) {
				cout << s.back() << "\n";
			}
			else
			{
				cout << -1 << "\n";
			}
		}
	}
	return 0;
}