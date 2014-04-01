#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int caseNum;
    cin >> caseNum;
    while (caseNum--)
    {
        int n;
        cin >> n;
        int a, b=0;
        vector<int> diff;
        for (int i=0; i < n; ++i)
        {
            cin >> a;
            diff.push_back(a-b);
            b = a;
        }

        for (int i=0; i < n; ++i)
        {
            int p = i;
            while (diff[p] == 0) --p;
            if (i) cout << " ";
            cout << i-p+1;
            --diff[p];
        }
        cout << endl;
    }
}
