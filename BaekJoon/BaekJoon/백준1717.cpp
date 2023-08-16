#include <iostream>
using namespace std;

int Find(int x, int* arr) {
	if (x == arr[x]) return x;
	return arr[x] = Find(arr[x], arr);
}

void Union(int x, int y, int* arr) {
	x = Find(x, arr);
	y = Find(y, arr);

	if (x == y) return;
	if (x < y) arr[y] = x;
	else arr[x] = y;
}

bool isUnion(int x, int y, int* arr) {
	x = Find(x, arr);
	y = Find(y, arr);
	return (x == y);
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);	

	int n, m;
	cin >> n >> m;

	int* arr = new int[n + 1];

	for (int i = 0; i <= n + 1; i++)
	{
		arr[i] = i;
	}


	int a, b, c;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		if (a == 0)
		{
			Union(b, c, arr);
		}
		else
		{
			if (isUnion(b, c, arr)) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}
	}

}