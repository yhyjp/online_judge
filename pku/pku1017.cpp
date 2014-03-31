// 貪欲法.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    while (true)
    {
        int in[7];
        for (int i=1; i <= 6; ++i) cin >> in[i];
        if (count(in+1, in+7,0) == 6) break;

        int ans = 0;
        int emptyFor1 = 0;
        int emptyFor2 = 0;
        
        ans += in[6];
        
        ans += in[5];
        emptyFor1 += in[5] * 11;

        ans += in[4];
        emptyFor2 = in[4] * 5;

        ans += (in[3]+3) / 4;
        switch (in[3] % 4)
        {
        case 0: break;
        case 1: emptyFor1+=7; emptyFor2+=5; break;
        case 2: emptyFor1+=6; emptyFor2+=3; break;
        case 3: emptyFor1+=5; emptyFor2+=1; break;
        }

        if (emptyFor2 < in[2])
        {
            in[2] -= emptyFor2;
        }
        else
        {
            emptyFor1 += (emptyFor2-in[2]) * 4;
            in[2] = 0;
        }
        ans += (in[2] + 8) / 9;
        emptyFor1 += (9 - in[2]%9)%9 * 4;

        in[1] = max(0, in[1] - emptyFor1);
        ans += (in[1] + 35) / 36;

        cout << ans << endl;
    }
    return 0;
}
