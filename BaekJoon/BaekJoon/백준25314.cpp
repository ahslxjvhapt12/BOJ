#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int repeat = 0;
	repeat = n / 4;
	for (int i = 0; i < repeat; i++)
	{
		cout << "long ";
	}
	cout << "int";
	return 0;
}