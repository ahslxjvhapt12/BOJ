#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int n, m;
	int i, j;
	cin >> n >> m;

	int c[101] = { 0, };

	// c[1]=1, c[2]=2 �������ֱ�
	for (int a = 1; a <= n; a++)
	{
		c[a] = a;
	}

	//��Ģ �Է� �� ����
	for (int b = 1; b <= m; b++)
	{
		cin >> i >> j;
		reverse(c + i, c + j + 1);
	}

	//���
	for (int d = 1; d <= n; d++)
	{
		cout << c[d] << " ";
	}

	return 0;
}