#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<vector<int>> v; // 인접 리스트
	vector<int> indegree;  // 진입 차수 배열
	v.resize(n + 1);
	indegree.resize(n + 1);

	// 인접 리스트 작성 & 진입 차수 배열 초기화
	for (int i = 0; i < m; i++)
	{
		int s, e;
		cin >> s >> e;
		v[s].push_back(e);
		indegree[e]++;
	}

	queue<int> q;

	for (int i = 1; i <= n; i++)
	{
		// 진입 차수가 0인 요소가 있으면
		if (indegree[i] == 0)
			q.push(i); // q에 삽입
	}


	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		cout << now << " ";
		for (int next : v[now])
		{
			indegree[next]--;
			if (indegree[next] == 0)
				q.push(next);
		}
	}
}