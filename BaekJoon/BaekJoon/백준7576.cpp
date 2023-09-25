#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<vector<int>> maps;
vector<vector<int>> visited;

int n, m;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void BFS(int x, int y) {
	queue<pair<int, int>>que; que.push({ x, y });
	visited[x][y] = 1;
	while (!que.empty())
	{
		int x = que.front().first; // 행
		int y = que.front().second; // 열
		que.pop();
		for (int i = 0; i < 4; i++) // 현제 자표의 상화좌우를 살핀다.
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue; // 탐색 범위 벗어난 것 무시
			if (maps[nx][ny] == 1 && visited[nx][ny] == 0)
			{
				que.push({ nx,ny });
				visited[nx][ny] = visited[x][y] + 1;
			}


		}
	}
}

int main() {

	cin >> n >> m;
	maps.resize(0, vector<int>(0, 0));
	visited.resize(n + 1, vector<int>{m + 1, 0});

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

		}
	}
	int day = 0;

}
