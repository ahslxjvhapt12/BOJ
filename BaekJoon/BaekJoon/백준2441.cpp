#include <iostream>

using namespace std;

int main()
{
    int repeat = 0;
    cin >> repeat;
    for (int i = repeat - 1; i >= 0; i--)
    {
        for (int j = repeat-1; j > i; j--)
            cout << " ";

        for (int j = 0; j <= i; j++)
            cout << "*";

        cout << endl;
    }
}