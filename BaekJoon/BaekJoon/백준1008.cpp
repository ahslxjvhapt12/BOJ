#include<iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    //가장 큰 자릿수 부터 10번째 자리까지 표현
    cout.precision(10);
    cout << a / b;
    return 0;
}