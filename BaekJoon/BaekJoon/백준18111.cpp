#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cal(vector<int> v1, vector<int> v2) {
	if (v1[0] == v2[0])         // 소요 시간이 같은 경우
		return v1[1] > v2[1];   // 높이 내림차순
	return v1[0] < v2[0];       // 소요 시간 올림차순
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	vector<vector<int>> v;
	vector<vector<int>> output;
	int n, m, b;

	// 입력
	cin >> n >> m >> b;
	for (int i = 0; i < n; i++) {
		vector<int> vtmp;
		for (int j = 0; j < m; j++) {
			int tmp;
			cin >> tmp;
			vtmp.push_back(tmp);
		}
		v.push_back(vtmp);
	}

	// 계산
	for (int i = 0; i <= 256; i++) {
		int goal = i;
		int invenB = b;
		int reqBlock = 0;
		int s = 0;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {

				if (goal > v[j][k]) {
					reqBlock += goal - v[j][k];
					s += goal - v[j][k];
				}

				else if (goal < v[j][k]) {
					invenB += v[j][k] - goal;
					s += 2 * (v[j][k] - goal);
				}
			}
		}
		if (reqBlock - invenB > 0)
			continue;
		else {
			output.push_back({ s,goal });
		}
	}
	sort(output.begin(), output.end(), cal);
	cout << output[0][0] << " " << output[0][1];
}