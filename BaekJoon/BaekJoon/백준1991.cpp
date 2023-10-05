#include <iostream>
#include <map>

using namespace std;

map <char, pair<char, char>> tree;

// ÀüÀ§
void preorder(char ch) {
	if (ch == '.') return;
	cout << ch;
	preorder(tree[ch].first);
	preorder(tree[ch].second);
}

void inorder(char ch) {
	if (ch == '.') return;
	inorder(tree[ch].first);
	cout << ch;
	inorder(tree[ch].second);
}

void postorder(char ch) {
	if (ch == '.') return;
	postorder(tree[ch].first);
	postorder(tree[ch].second);
	cout << ch;
}

int main() {
	int n;
	cin >> n;

	char input1, input2, input3;
	for (int i = 0; i < n; i++)
	{
		cin >> input1 >> input2 >> input3;
		tree[input1] = make_pair(input2, input3);
	}
	preorder('A');
	cout << '\n';
	inorder('A');
	cout << '\n';
	postorder('A');
}