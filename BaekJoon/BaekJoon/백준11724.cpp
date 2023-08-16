#include<iostream>
#include<vector>
using namespace std;

void DFS(int v, vector<bool>& visited, vector<vector<int>>& A) {
	if (visited[v]) {
		return;
	}

	visited[v] = true;

	for (int i : A[v])
	{
		if (visited[i] == false) 
			DFS(i, visited, A);
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> v;
	v.resize(n + 1);
	vector<bool> visited(n + 1, false);

	for (int i = 0; i < m; i++)
	{
		int s, e;
		cin >> s >> e;
		v[s].push_back(e);
		v[e].push_back(s);
	}

	int count = 0;

	for (int i = 1; i < n + 1; i++)
	{
		if (!visited[i]) {
			count++;
			DFS(i, visited, v);
		}
	}
	cout << count << '\n';
}
