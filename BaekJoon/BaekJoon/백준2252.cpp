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
	vector<vector<int>> v; // ���� ����Ʈ
	vector<int> indegree;  // ���� ���� �迭
	v.resize(n + 1);
	indegree.resize(n + 1);

	// ���� ����Ʈ �ۼ� & ���� ���� �迭 �ʱ�ȭ
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
		// ���� ������ 0�� ��Ұ� ������
		if (indegree[i] == 0)
			q.push(i); // q�� ����
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