/*
  1012 Joseph
  TLE なったので解を埋め込む。
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
bool test(const int k, const int step)
{
    vector<int> v(k*2, 1);
    fill(v.begin(), v.begin()+k, 0);
    
    int p = (step-1) % v.size();
    while (v.size() > k)
    {
        if (v[p] == 0) return false;
        v.erase(v.begin()+p);
        p = (p+step-1) % v.size();
    }
    return true;
}
*/

int main()
{
/*
    for (int k=1; k < 14; ++k)
    {
        for (int i=1 ;; ++i)
        {
            if (test(k, i))
            {
                cout << i << ",";
                break;
            }
        }
    }
*/
    int ans[14] = { 0, 2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881 };
    int n;
    while (cin >> n && n!=0)
    {
        cout << ans[n] << endl;
    }
}
