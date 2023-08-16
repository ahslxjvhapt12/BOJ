#include <iostream>
#include <string>

using namespace std;

int main()
{
	//char c;
	string a;
	//while (cin >> c)
	//{
	//	a += c;
	//}
	//cin.ignore();
	getline(cin, a);

	int count = 0;

	for (int i = 0; i < a.size(); i++)
	{
		if (i == 0) count++;
		else if (a[i] == ' ') count++;
	}

	if (a[a.size() - 1] == ' ') count--;
	//if (a.size() == 0) count--;
	cout << count;

	return 0;
}