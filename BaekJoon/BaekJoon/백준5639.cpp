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
{//��� n�� ���� Ž�� Ʈ���� ������. ���� Ʈ���̸� n�� ��Ʈ�� �ϰ�, �׷��� ������ insertRecur�� ȣ���ؼ� ��带 ����
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
			InsertRecur(root->left, node);// ��ĭä���
	}
	else {
		if (root->right == NULL)
			MakeRightSubTree(root, node);
		else
			InsertRecur(root->right, node);// ��ĭä���
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