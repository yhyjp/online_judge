#include <iostream>
#include <algorithm>
using namespace std;

int solve(int n)
{
    int res = 1;
    while (n != 1)
    {
        ++res;
        if (n%2) n = 3*n + 1;
        else n = n/2;
    }
    return res;
}

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int ta = a;
        int tb = b;
        if (a > b) swap(a, b);

        int ans = 0;
        for (int i=a; i <= b; ++i)
        {
            int t = solve(i);
            if (t > ans) ans = t;
        }

        cout << ta << " " << tb << " " << ans << endl;
    }
    return 0;
}
