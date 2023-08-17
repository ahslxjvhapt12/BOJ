#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	cout << "<";
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < k; j++) {	//k-1번 동안 front 원소 옮기기
			q.push(q.front());
			q.pop();
		}
		if (i == n - 1) {
			cout << q.front() << ">";
			break;
		}
		cout << q.front() << ", ";
		q.pop();
	}
	return 0;
}