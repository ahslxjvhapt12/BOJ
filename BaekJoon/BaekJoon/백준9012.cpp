#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	stack<int>s;

	int n;
	bool flag = false;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < input.size(); j++)
		{
			if (input[j] == '(') {
				s.push(1);
			}
			if (input[j] == ')')
			{	
				if (s.empty())
				{
					flag = true;
					cout << "NO\n";
					break; 0;
				}
				s.pop();
			}
		}
		if (flag == false) {

			if (s.empty() == true) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}

		while (!s.empty())
		{
			s.pop();
		}
		flag = false;
	}
}