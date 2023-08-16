#include<iostream>
#include<queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	queue<int> q;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		q.push(i + 1);
	}

	while (q.size() > 1)
	{
		q.pop();
		int temp = q.front();
		q.push(temp);
		q.pop();
	}

	cout << q.front();
	return 0;
}