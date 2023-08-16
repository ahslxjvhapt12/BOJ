#include <iostream>
using namespace std;

int main()
{
    string str;
    double score, save;
    double sum = 0, sumScore = 0;
    string rating;
    for (int i = 0; i < 20; i++)
    {
        cin >> str >> score >> rating;
        if (rating == "P") continue;
        save = 0;
        if (rating[0] == 'A')
            save = 4;
        else if (rating[0] == 'B')
            save = 3;
        else if (rating[0] == 'C')
            save = 2;
        else if (rating[0] == 'D')
            save = 1;
        else
            save = 0;

        if (rating[1] == '+')
        {
            save += 0.5;
        }

        sum += score * save;
        sumScore += score;
    }
    cout.precision(7);
    cout << sum / sumScore;
}