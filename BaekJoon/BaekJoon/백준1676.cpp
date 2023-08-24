#include <iostream>

using namespace std;

int main() {
    int a, b = 10;
    int count = 0;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        if (i % 5 == 0) {
            count++;
        }
    }
    int sum = count;

    while (b >= 5) {
        b = count / 5;
        count = b;
        sum += b;
    }
    cout << sum;
}
