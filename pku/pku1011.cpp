// pku1011 Sticks.
// 解法：枝狩りDFS.

#include <iostream>
#include <algorithm>
using namespace std;

const int STICK_MAX = 65;
int stick[STICK_MAX];
int used[STICK_MAX];
int n;

bool dfs(const int p, const int sum, const int bu, const int target)
{
    if (p == n) return true;
    
    int nextSum = sum;
    if (sum == target) nextSum = 0;

    int be = 0;
    for (int i=(nextSum!=0?bu:0); i < n; ++i)
    {
        if (used[i]) continue;
        if (stick[i] == be) continue;
        if (nextSum+stick[i] > target) continue;
        be = stick[i];
        used[i] = true;
        if (dfs(p+1, nextSum+stick[i], i, target)) return true;
        used[i] = false;
        if (nextSum == 0) break;
    }
    return false;
}

int main()
{
    while (cin >> n)
    {
        if (n == 0) break;
        int sum = 0;
        int maxStick = 0;
        for (int i=0; i < n; ++i)
        {
            cin >> stick[i];
            sum += stick[i];
            if (maxStick < stick[i]) maxStick = stick[i];
        }
        sort(stick, stick+n);
        reverse(stick, stick+n);
        fill(used, used+n, false);
        for (int i=maxStick; i <= sum; ++i)
        {
            if (sum % i != 0) continue;
            if (dfs(0, 0, 0, i))
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
