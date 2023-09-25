//DFS 깊이 우선
//BFS 너비 우선
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> map[100];
int visited[100];
int visited2D[100][100];

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

vector<vector<int>> v;
void DFS(int start) {
	visited[start] = true;
	for (int i = 0; i < map[start].size(); i++)
	{
		int y = map[start][i];
		if (visited[y] == false)
			DFS(y);
	}
}

void BFS(int start) {
	queue<int> q;
	visited[start] = true;
	q.push(start);

	while (!q.empty())
	{
		int temp = q.front();
		q.pop();
		for (int i = 0; i < map[temp].size(); i++)
		{
			int y = map[temp][i];
			if (visited[y] == false) {
				visited[y] = true;
				q.push(y);
			}
		}
	}
}

// dx dy 활용
void DFS(int y, int x) {
	visited2D[y][x] = true;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (visited2D[ny][nx] == false && map[ny][nx] == 1) {
			DFS(ny, nx);
		}
	}
}