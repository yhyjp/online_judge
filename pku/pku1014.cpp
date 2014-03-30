//
// 動的計画法.
//

#include <iostream>
#include <algorithm>
using namespace std;

const int N = 20001;
const int M = 6 * N + 10;
const int MH = M / 2 + 10;

int dp[MH];

int main()
{
    const char * ansStr[2] =
    {
        "Can't be divided.",
        "Can be divided."
    };
    int caseNo = 0;
    while (true)
    {
        ++caseNo;
        int in[6];
        int inSum = 0;
        for (int i=0; i < 6; ++i)
        {
            cin >> in[i];
            inSum += (i+1) * in[i];
        }
        if (inSum == 0) break;

        cout << "Collection #" << caseNo << ":" << endl;

        if (inSum % 2)
        {
            cout << ansStr[0] << endl << endl;
            continue;
        }
        
        const int mh = inSum / 2;
        const int NONE = 1000;
        fill(dp, dp+mh+1, NONE);
        dp[0] = -1;

        for (int j=0; j < 6; ++j)
        {
            for (int i=mh; i >= 0; --i)
            {
                if (dp[i] < j)
                {
                    for (int k=1; k <= in[j]; ++k)
                    {
                        const int p = i + (j+1)*k;
                        //printf("%d + %d * %d = %d\n", i, j+1, k, p);
                        if (p > mh) break;
                        dp[p] = j;
                    }
                }
            }
        }
        if (dp[mh] != NONE) cout << ansStr[1];
        else cout << ansStr[0];
        cout << endl << endl;
    }
    return 0;
}
