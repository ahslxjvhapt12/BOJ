#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int> input(N);
	vector<int> v(N);
	for (int i = 0; i < N; i++)
	{
		cin >> input[i];
	}

	int last = 0;
	v[0] = input[0];

	for (int i = 1; i < N; i++)
	{
		if (input[i] > v[last])
		{
			v[++last] = input[i];
		}
		else
		{
			int idx = lower_bound(v.begin(), v.begin() + last, input[i]) - v.begin();
			v[idx] = input[i];
		}
	}


	cout << last + 1;
	return 0;
}