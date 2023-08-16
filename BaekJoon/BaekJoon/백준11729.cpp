#include <iostream>
#include <cmath>
using namespace std;

int hanoi(int h, int from, int by, int to)
{
	if (h == 1)
	{
		cout << from << " " << to << "\n";
	}
	else
	{
		hanoi(h - 1, from, to, by);
		cout << from << " " << to << "\n";
		hanoi(h - 1, by, from, to);
	}
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	int mc = (int)(pow(2, n) - 1);
	cout << mc << "\n";
	hanoi(n, 1, 2, 3); 
	return 0;
}