#include<iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    //���� ū �ڸ��� ���� 10��° �ڸ����� ǥ��
    cout.precision(10);
    cout << a / b;
    return 0;
}