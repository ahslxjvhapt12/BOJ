#include <iostream>

using namespace std;

int arr[9];
bool visited[9];
void backTracking(int n, int m, int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < cnt; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (visited[i]) continue;
            arr[cnt] = i;
            visited[i] = true;
            backTracking(n, m, cnt + 1);
            arr[cnt] = 0;
            visited[i] = false;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    backTracking(n, m, 0);
}