#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	string str, bomb, answer, check;
	cin >> str >> bomb;
	for (int i = 0; i < str.size(); ++i)
	{
		answer += str[i];
		if (str[i] == bomb.back() && answer.size() >= bomb.size())
		{
			check = "";
			for (int j = 0; j < bomb.size(); ++j)
				check += answer[answer.size() - bomb.size() + j];
			if (check == bomb)
				answer.erase(answer.size() - bomb.size());
		}
	}
	if (answer == "")
		cout << "FRULA";
	else
		cout << answer;
}