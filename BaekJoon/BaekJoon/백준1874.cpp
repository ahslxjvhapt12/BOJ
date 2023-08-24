#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
int k = 0;

void act2(int num, stack<int>& s, vector<char>& v) {
	if (s.empty()) {
		k = 1;
		return;
	}
	if (s.top() == num) {
		s.pop();
		v.push_back('-');
		return;
	}
	k = 1;
}

void act(int& idx, int num, stack<int>& s, vector<char>& v) {
	while (idx < num) {
		idx++;
		s.push(idx);
		v.push_back('+');
	}
	act2(num, s, v);
}

void show(vector<char>& v) {
	for (char e : v)
		cout << e << '\n';
}


int main(void) {
	stack<int> s;
	vector<char> v;
	int n;
	cin >> n;

	int idx = 0;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		act(idx, num, s, v);
		if (k)
			break;
	}
	if (k)
		cout << "NO";
	else
		show(v);
	return 0;
}