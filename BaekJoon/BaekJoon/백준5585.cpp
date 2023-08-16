#include<iostream>
using namespace std;

int main() {

	int n, sum = 0;
	cin >> n;
	n = 1000 - n;
	while (n)
	{
		if (n >= 500) {
			n -= 500;
			sum++;
		}
		else if (n >= 100)
		{
			n -= 100;
			sum++;
		}
		else if (n >= 50)
		{
			n -= 50;
			sum++;
		}
		else if (n >= 10)
		{
			n -= 10;
			sum++;
		}
		else if (n >= 5)
		{
			n -= 5;
			sum++;
		}
		else if (n >= 1)
		{
			n -= 1;
			sum++;
		}
	}
	cout << sum;
	return 0;
}