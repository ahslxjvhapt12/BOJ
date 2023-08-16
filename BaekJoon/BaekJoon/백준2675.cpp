#include <iostream>
#include <string>

using namespace std;
int main() {
	int loop, time;
	cin >> loop;

	string str;
	for (int t = 0; t < loop; t++)
	{
		cin >> time >> str;
		for (int i = 0; i < str.length(); i++)
		{
			for (int j = 0; j < time; j++)
			{
				cout << str[i];
			}
		}
		cout << endl;
	}
	return 0;
}