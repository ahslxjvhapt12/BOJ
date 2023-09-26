#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int from, to;

	for (int i = 0; i < n; i++)
	{
		cin >> from >> to;

		string str = "";
		for (int j = from; j <= to; j++)
		{
			str += to_string(j);
		}

		int cnt = 0;
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == '0') cnt++;
		}
		cout << cnt << '\n';
	}
}