#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	stack<int> s;
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
				cout << s.top() << endl;
				s.pop();
			}
			else
			{
				cout << -1 << endl;
			}
		}
		else if (str == "size")
		{
			cout << s.size() << endl;
		}
		else if (str == "empty")
		{
			cout << s.empty() << endl;
		}
		else if (str == "top")
		{
			if (!s.empty())
			{
				cout << s.top() << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
	}
	return 0;
}