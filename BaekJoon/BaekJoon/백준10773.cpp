#include<iostream>
#include<stack>

using namespace std;

int main() {
	stack<int> s;
	int k, sum = 0, input;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> input;
		if (input == 0) {
			s.pop();
		}
		else
		{
			s.push(input);
		}
	}

	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}
	cout << sum;
	return 0;
}