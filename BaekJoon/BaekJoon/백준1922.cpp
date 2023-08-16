#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int start;
    int end;
    int weight;
};

bool compare(Edge a, Edge b) {
    if (a.weight == b.weight) return a.start < b.start;
    return a.weight < b.weight;
}

int v, e;
int mst_weight = 0;
vector<int> group;
vector<Edge> ed;

int find(int x)
{
    if (group[x] == x) return x; 
    else return group[x] = find(group[x]); 
}

bool isUnion(int x, int y)
{
    x = find(x);
    y = find(y);
    if (x == y) return true;
    else return false;
}

void Union(int x, int y) { 
    x = find(x);
    y = find(y);
    (x != y) ? group[y] = x : 0;
}

int main() {
    cin >> v >> e;
    group.resize(v + 1);

    for (int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        ed.push_back({ a,b,c });
    }
    for (int i = 0; i <= v; i++) {
        group[i] = i;
    }

    sort(ed.begin(), ed.end(), compare);


    for (auto t : ed) { 
        if (!isUnion(t.start, t.end)) { 
            Union(t.start, t.end);
            mst_weight += t.weight; 
        }
    }

    cout << mst_weight << '\n';
    return 0;
}