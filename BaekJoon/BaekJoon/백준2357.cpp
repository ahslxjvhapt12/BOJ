#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>

using namespace std;

// 재귀함수

// a : 원본 배열
// tree : 생성할 세그먼트 트리
// node : 노드의 번호 (0 번째는 사용하지 않음)
// 각 노드는 start - end 까지의 합을 가지고 있음

void Init(vector<long long>& a, vector<long long>& tree, int node, int start, int end) {

	// 리프노드일때 : 범위가 아닌 값을 가지고 있는 애
	if (start == end)
	{
		tree[node] = a[start];
	}
	else
	{
		Init(a, tree, node * 2, start, (start + end) / 2);          // 왼쪽 자식 노드 node * 2
		Init(a, tree, node * 2 + 1, (start + end) / 2 + 1, end);    // 오른쪽 자식 노드 node * 2 + 1
		tree[node] = tree[node * 2] + tree[node * 2 + 1];           // 왼쪽 자식 + 오른쪽 자식 = 현재 노드
	}
}

long long query(vector<long long>& tree, int node, int start, int end, int left, int right) {

	// 구하려는 범위와 트리 범위가 겹치지 않을 때
	if (left > end || right < start) {
		// 겹치는 부분이 없음 -> return 0
		return 0;
	}
	// 구하려는 범위가 트리 전체를 포함할 때
	if (left <= start && end <= right) {
		//더이상의 탐색을 이어갈 필요가 없음 현재 node 의 합을 반환
		return tree[node];
	}
	long long lsum = query(tree, node * 2, start, (start + end) / 2, left, right);
	long long rsum = query(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
	return min(lsum, rsum);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, qCount;
	cin >> n >> qCount;
	vector<long long> v(n);
	return 0;
}