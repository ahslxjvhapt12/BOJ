#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string input;
	stack<int> s;

	int cnt = 0;
	cin >> input;

	for (int i = 0; i < input.size() - 1; ++i)
	{
		if (input[i] == '(')
		{
			if (input[i + 1] == ')')
			{
				cnt += s.size();
			}
			else
			{
				s.push(1);
			}
		}
		if (input[i] == ')')
		{
			if (input[i - 1] == '(')
			{
			}
			else
			{
				s.pop();
				cnt++;
			}
		}
	}

	if (!(input[input.size() - 1] = ')' && input[input.size() - 2] == '(')) cnt++;
	cout << cnt;
}