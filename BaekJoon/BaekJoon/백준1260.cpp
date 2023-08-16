#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void DFS(int v, vector<bool>& visited, vector<vector<int>>& A) {
	visited[v] = true;
	cout << v << ' ';
	for (int i : A[v])
	{
		if (visited[i] == false)
			DFS(i, visited, A);
	}
}

void BFS(int v, vector<bool>& visited, queue<int>& q, vector<vector<int>>& A) {
	visited[v] = true;
	q.push(v);
	while (!q.empty())
	{
		int y = q.front();
		q.pop();
		cout << y << ' ';
		for (int i : A[y]) {
			if (visited[i] == false) {
				visited[i] = true;
				q.push(i);
			}
		}
	}
}

int main() {
	int n, m, v;
	cin >> n >> m >> v;

	vector<bool> visited(n + 1, false);
	vector<vector<int>> A(n + 1);
	queue<int> q;

	for (int i = 0; i < m; i++)
	{
		int s, e;
		cin >> s >> e;
		A[s].push_back(e);
		A[e].push_back(s);
	}

	for (int i = 1; i <= n; i++)
	{
		sort(A[i].begin(), A[i].end());
	}

	DFS(v, visited, A);
		
	cout << '\n';

	for (int i = 0; i <= n; i++)
	{
		visited[i] = false;
	}

	BFS(v, visited, q, A);
}