#include <iostream>
#include <string>
using namespace std;


int main() {
	int L;
	cin >> L;

	string s;
	cin >> s;

	long long count = 0, answer = 0;
	for (char c : s) {
		long long hash = c - 96;

		for (long long i = 0; i < count; i++) {
			hash *= 31;
			hash = hash % 1234567891;
		}

		answer += hash;
		answer = answer % 1234567891;
		count++;
	}

	cout << answer;
}