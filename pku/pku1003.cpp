#include <iostream>
using namespace std;

int main()
{
    double x;
    while (cin>>x)
    {
        if (x == 0) break;
        for (int i=2; ; i++)
        {
            x -= 1.0 / i;
            if (x <= 0)
            {
                cout << (i-1) << " card(s)" << endl;
                break;
            }
        }
    }
    return 0;
}
