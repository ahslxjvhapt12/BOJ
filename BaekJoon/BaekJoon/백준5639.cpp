#include <iostream>

using namespace std;

struct BTreeNode
{
	int data;
	struct BTreeNode* left = NULL;
	struct BTreeNode* right = NULL;
};

class BST
{
public:
	BTreeNode* root = NULL;
	void Insert(BTreeNode* node);
	void InsertRecur(BTreeNode* root, BTreeNode* node);
};


void PostorderTraverse(BTreeNode* bt)
{
	if (bt == NULL) return;
	PostorderTraverse(bt->left);
	PostorderTraverse(bt->right);
	cout << bt->data << '\n';
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub) {
	// if there is a node in left link, delete it
	if (main->left != NULL)	delete main->left;
	main->left = sub;
	// put sub in left link of main
}

void MakeRightSubTree(BTreeNode* main, BTreeNode* sub) {
	// if there is a node in right link, delete it
	if (main->right != NULL) delete main->right;
	main->right = sub;
	// put sub in right link of main
}

void BST::Insert(BTreeNode* node)
{//노드 n을 이진 탐색 트리에 삽입함. 공백 트리이면 n을 루트로 하고, 그렇지 않으면 insertRecur을 호출해서 노드를 삽입
	if (root == NULL) root = node;
	else InsertRecur(root, node);
}

void BST::InsertRecur(BTreeNode* root, BTreeNode* node)
{
	if (node->data == root->data)
		return;
	else if (node->data < root->data) {
		if (root->left == NULL)
			MakeLeftSubTree(root, node);
		else
			InsertRecur(root->left, node);// 빈칸채우기
	}
	else {
		if (root->right == NULL)
			MakeRightSubTree(root, node);
		else
			InsertRecur(root->right, node);// 빈칸채우기
	}
}
int main() {

	int n;
	BST tree;

	while (cin >> n)
	{
		BTreeNode* node = new BTreeNode();
		node->data = n;
		tree.Insert(node);
	}

	PostorderTraverse(tree.root);
}