// 簡易版 Edit-Distance 総当たり.
// TLE 厳しい...
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
#include <cstdio>
using namespace std;

char dict[10001][16];

bool isConvertable(const char *a, const char *b)
{
    const int an = strlen(a);
    const int bn = strlen(b);

    if (abs(an-bn) >= 2) return false;

    const int n = min(an, bn);
    for (int i=0; i < n; ++i)
    {
        if (a[i] == b[i]) continue;
        if (i+1<=an && i+1<=bn && strcmp(a+(i+1), b+(i+1))==0) return true;
        if (i+1<=an && strcmp(a+(i+1), b+(i+0))==0) return true;
        if (i+1<=bn && strcmp(a+(i+0), b+(i+1))==0) return true;
        return false;
    }
    
    return true;
}

int main()
{
    int dn = 0;
    while (true)
    {
        scanf("%s", dict[dn++]);
        if (dict[dn-1][0] == '#')
        {
            --dn;
            break;
        }
    }

    char w[20];
    while (cin>>w)
    {
        if (w[0] == '#') break;
        vector<int> ans;
        bool isCorrect = false;
        for (int i=0; i < dn; ++i)
        {
            if (strcmp(dict[i], w) == 0)
            {
                isCorrect = true;
                break;
            }
            if (isConvertable(dict[i], w))
            {
                ans.push_back(i);
            }
        }

        if (isCorrect)
        {
            cout << w << " is correct" << endl;
        }
        else
        {
            cout << w << ":";
            for (int i=0; i < ans.size(); ++i)
            {
                printf(" %s", dict[ans[i]]);
            }
            cout << endl;
        }
    }
    
    return 0;
}
