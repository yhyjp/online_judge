#include <iostream>
using namespace std;

int main()
{
    int caseNo = 1;
    int p, e, i, d;
    while (cin>>p>>e>>i>>d)
    {
        if (p==-1) break;

        for (int j=1; j <= 21252; ++j)
        {
            if ((j+d-p) % 23 == 0 &&
                (j+d-e) % 28 == 0 &&
                (j+d-i) % 33 == 0)
            {
                cout << "Case " << caseNo
                     << ": the next triple peak occurs in "
                     << j << " days." << endl;;
                break;
            }
        }
        
        ++caseNo;
    }
    
    return 0;
}
