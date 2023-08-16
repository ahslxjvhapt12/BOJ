#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	int t;
	string p;
	int n;
	string input;
	bool reverse, error;
	string num;
	bool first;


	cin >> t;
	for (int fjeifoie = 0; fjeifoie < t; fjeifoie++)
	{
		num = "";
		first = true;
		reverse = false;
		error = false;
		deque<int> dq;
		cin >> p;
		cin >> n;
		cin >> input;
		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] >= '0' && input[i] <= '9') {
				num += input[i];
			}
			else if (input[i] == ',' || input[i] == '[' || input[i] == ']')
			{
				if (!num.empty()) {
					dq.push_back(stoi(num));
				}
				num = "";
			}
			//if (input[i] == ',' || input[i] == '[' || input[i] == ']') continue;
			//dq.push_back(input[i] - '0');

			//if (dq.size() == n)
			//	break;
		}

		for (int i = 0; i < p.size(); i++)
		{
			if (p[i] == 'R')
			{
				reverse = !reverse;
			}
			else if (p[i] == 'D')
			{
				if (dq.empty()) {
					error = true;
					break;
				}

				if (reverse == false) {
					dq.pop_front();
				}
				else {
					dq.pop_back();
				}
			}
		}

		if (error == true) {
			cout << "error" << endl;
		}
		else {
			cout << '[';
			while (!dq.empty())
			{
				if (first) {
					first = false;
					if (reverse) {
						cout << dq.back();
						dq.pop_back();
					}
					else {
						cout << dq.front();
						dq.pop_front();
					}
				}
				else {
					cout << ',';
					if (reverse) {
						cout << dq.back();
						dq.pop_back();
					}
					else {
						cout << dq.front();
						dq.pop_front();
					}
				}
			}
			cout << "]\n";
		}

	}
}