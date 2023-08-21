#include <string>
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n; 
	int a = 0;

	int result = 0;
	while (1) {

		result++;

		string str = to_string(result);
		if (str.find("666") != string::npos) a++;

		if (a == n)
		{
			cout << str << endl;
			break;
		}
	}

	return 0;
}