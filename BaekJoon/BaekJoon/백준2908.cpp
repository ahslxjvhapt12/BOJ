#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1, str2;
	cin >> str1 >> str2;

	char temp = str1[2];
	str1[2] = str1[0];
	str1[0] = temp;

	temp = str2[2];
	str2[2] = str2[0];
	str2[0] = temp;

	if (str1[0] > str2[0]) {
		cout << str1;
	}
	else if (str1[0] < str2[0]) {
		cout << str2;
	}
	else if (str1[1] > str2[1]) {
		cout << str1;
	}
	else if (str1[1] < str2[1]) {
		cout << str2;
	}
	else if (str1[2] > str2[2]) {
		cout << str1;
	}
	else if (str1[2] < str2[2]) {
		cout << str2;
	}
}