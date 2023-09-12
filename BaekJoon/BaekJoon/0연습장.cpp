#include <string>
#include <vector>

using namespace std;
int answer = 0;
void DFS(int num, int deep, const vector<int>& numbers, const int target)
{
    if (deep == numbers.size())
    {
        if (num == target)
            answer++;
    }
    else
    {
        DFS(num + numbers[deep], deep + 1, numbers, target);
        DFS(num - numbers[deep], deep + 1, numbers, target);
    }
}

int solution(vector<int> numbers, int target) {
    DFS(0, 0, numbers, target);
    return answer;
}