#include<iostream>
#include<stack>
#include<string>
using namespace std;
/*
bool solution(string str)
{
	stack<int>s;
	for (int j = 0; j < str.size(); j++)
	{
		if (str[j] == '(') {
			s.push(1);
		}
		if (str[j] == ')')
		{
			if (s.empty())
			{
				return false;
			}
			s.pop();
		}
	}

	if (s.empty()) {
		return true;
	}
	return false;
}
*/
int main() {
	//stack<char> s;
	//string str;

	//int input, count = 0;
	//cin >> input;

	//for (int i = 0; i < input; i++)
	//{
	//	cin >> str;
	//	s.push(str[0]);
	//	for (int j = 1; j < str.size(); j++)
	//	{
	//		if (!s.empty()) {

	//			if (str[j] == s.top()) {
	//				s.pop();
	//			}
	//			else if(s.top() != str[j])
	//			{
	//				s.push(str[j]);
	//			}
	//		}
	//		else {
	//			s.push(str[j]);
	//		}

	//	}

	//	if (s.empty()) {
	//		count++;
	//	}

	//	while (!s.empty())
	//	{
	//		s.pop();
	//	}
	//}
	//cout << count;
	//return 0;

	int repeat = 0;
	int input;
	int checkNum = 1;
	string answer = "";
	stack <int> s;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		s.push(input);
		answer += 'P';
		while (!s.empty() && s.top() == checkNum)
		{
			s.pop();
			answer += "O";
			checkNum++;
		}
	}

	if (s.empty())
		cout << answer;
	else
		cout << "impossible";
}
