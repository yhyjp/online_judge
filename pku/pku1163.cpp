// ’Æ°’Åª’·×’²è’Ë¡.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int table[110][110] = { 0 };
    for (int i=0; i < n; ++i)
    {
        for (int j=0; j <= i; ++j)
        {
            cin >> table[i][j];
        }
    }

    int dp[110][110];
    dp[0][0] = table[0][0];

    for (int i=1; i < n; ++i)
    {
        for (int j=0; j <= i; ++j)
        {
            if (j==0) dp[i][j] = dp[i-1][j];
            else if (j==i) dp[i][j] = dp[i-1][j-1];
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]);
            }
            dp[i][j] += table[i][j];
        }
    }

    int ans = dp[n-1][0];
    for (int i=1; i <= n; ++i)
    {
        ans = max(ans, dp[n-1][i]);
    }
    cout << ans << endl;
    
    return 0;
}





