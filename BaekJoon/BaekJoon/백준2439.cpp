#include<iostream>

using namespace std;

int main() {
	int repeat;
	cin >> repeat;
	for (int i = repeat; i > 0; i--) {
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k <= repeat - i; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}