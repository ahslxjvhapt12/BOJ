#include <string.h>
#include <iostream>

using namespace std;

int onCount = 0;
int secount[1001];

int recursion(const char* s, int l, int r, int count) {
    if (l >= r)
    {
        onCount = count;
        return 1;
    }
    else if (s[l] != s[r])
    {
        onCount = count;
        return 0;
    }
    else return recursion(s, l + 1, r - 1, ++count);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1, 1);
}

int main() {
    int n = 0;
    cin >> n;
    char a[1001];
    int b[1001];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        b[i] = isPalindrome(a);
        secount[i] = onCount;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " " << secount[i] << endl;
    }
}