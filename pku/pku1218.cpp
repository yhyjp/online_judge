#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (cin>>n)
    {
        int t[110] = { 0 };
        for (int i=2; i <= n; ++i)
        {
            for (int j=i; j <= n; j+=i)
            {
                t[j] = !t[j];
            }
        }
        cout << (count(t+1,t+n+1,0)) << endl;
    }
    return 0;
}
