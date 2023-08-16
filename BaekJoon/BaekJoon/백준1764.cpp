#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

int main() {
    int nonListen, nonSee, cnt = 0;
    cin >> nonListen >> nonSee;
    map<string, int> notKnow;
    string name;
    vector<string> neverKnow;
    for (int i = 0; i < nonListen; i++)
    {
        cin >> name;
        ++notKnow[name];
    }
    for (int i = 0; i < nonSee; i++)
    {
        cin >> name;
        ++notKnow[name];
    }
    for (auto item : notKnow) {
        if (item.second > 1) {
            ++cnt;
            neverKnow.push_back(item.first);
        }
    }
    cout << cnt << "\n";
    for (int i = 0; i < neverKnow.size(); i++)
    {
        cout << neverKnow[i] << "\n";
    }
}