#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*vector<vector<int>>*/ int visited[51][51];
/*vector<vector<int>>*/ int board[51][51];

int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };

void DFS(int y, int x) {
	visited[y][x] = 1;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (nx < 0 || nx > 51 || ny < 0 || ny > 51) continue;
		if (visited[ny][nx] == 0 && board[ny][nx] == 1) {
			DFS(ny, nx);
		}
	}
	return;
}

int main() {

	int testcase;
	int row, col, num;
	int x, y;

	cin >> testcase;

	while (testcase--)
	{
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);

		int cnt = 0;

		cin >> row >> col >> num;
		for (int i = 0; i < num; i++)
		{
			cin >> x >> y;
			board[y][x] = 1;
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (visited[j][i] == 0 && board[j][i] == 1)
				{
					cnt++;
					DFS(j, i);
				}
			}
		}
		cout << cnt << '\n';
	}
}