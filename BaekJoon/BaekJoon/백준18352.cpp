#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void BFS(vector<vector<int>>& adj, vector<int>& dist, vector<int>& answer, int n, int m, int k, int x) {
	queue<int> q;
	q.push(x);
	dist[x] = 0;

	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		for (int i = 0; i < adj[now].size(); i++)
		{
			int next = adj[now][i];
			if (dist[next] == -1) {
				dist[next] = dist[now] + 1;
				q.push(next);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (dist[i] == k)
			answer.push_back(i);
	}
}

int main()
{
	vector<vector<int>> adj;
	vector<int> dist;
	vector<int> answer;

	int n, m, k, x;
	int num1, num2;

	cin >> n >> m >> k >> x;

	adj.resize(n + 1);
	dist.resize(n + 1, -1);

	for (int i = 0; i < m; i++)
	{
		cin >> num1 >> num2;
		adj[num1].push_back(num2);
	}

	BFS(adj, dist, answer, n, m, k, x);

	if (answer.size() == 0) cout << -1;
	else {
		for (int i = 0; i < answer.size(); i++)
			cout << answer[i] << '\n';
	}
}