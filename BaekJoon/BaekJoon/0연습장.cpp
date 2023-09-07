#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;
bool isLinked(string str1, string str2) {
	int cnt = 0;
	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] == str2[i]) cnt++;
	}
	return cnt == str1.size() - 1;
}

int solution(string begin, string target, vector<string> words) {
	map <string, int> visited;
	queue<string> q;
	q.push(begin);
	visited[begin];

	while (!q.empty())
	{
		string now = q.front();
		q.pop();

		for (int i = 0; i < words.size(); i++)
		{
			string next = words[i];
			if (visited.find(next) == visited.end() && isLinked(now, next)) {
				q.push(next);
				visited[next] = visited[now] + 1;
			}
		}
	}
	if (visited.find(target) == visited.end()) return 0;
	return visited[target];
}