#include <iostream>

using namespace std;

void ACM(int h, int w, int n) 
{
	//if()
	cout << n % h;
	if (n / h < 9) cout << '0';
	cout << n / h + 1 << endl;
}

int main() {
	int time, h, w, n;
	cin >> time;

	for (int i = 0; i < time; i++)
	{
		cin >> h >> w >> n;
		ACM(h, w, n);
	}
	return 0;
}