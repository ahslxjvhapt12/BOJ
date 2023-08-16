#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>

using namespace std;

// ����Լ�

// a : ���� �迭
// tree : ������ ���׸�Ʈ Ʈ��
// node : ����� ��ȣ (0 ��°�� ������� ����)
// �� ���� start - end ������ ���� ������ ����

void Init(vector<long long>& a, vector<long long>& tree, int node, int start, int end) {

	// ��������϶� : ������ �ƴ� ���� ������ �ִ� ��
	if (start == end)
	{
		tree[node] = a[start];
	}
	else
	{
		Init(a, tree, node * 2, start, (start + end) / 2);          // ���� �ڽ� ��� node * 2
		Init(a, tree, node * 2 + 1, (start + end) / 2 + 1, end);    // ������ �ڽ� ��� node * 2 + 1
		tree[node] = tree[node * 2] + tree[node * 2 + 1];           // ���� �ڽ� + ������ �ڽ� = ���� ���
	}
}

long long query(vector<long long>& tree, int node, int start, int end, int left, int right) {

	// ���Ϸ��� ������ Ʈ�� ������ ��ġ�� ���� ��
	if (left > end || right < start) {
		// ��ġ�� �κ��� ���� -> return 0
		return 0;
	}
	// ���Ϸ��� ������ Ʈ�� ��ü�� ������ ��
	if (left <= start && end <= right) {
		//���̻��� Ž���� �̾ �ʿ䰡 ���� ���� node �� ���� ��ȯ
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