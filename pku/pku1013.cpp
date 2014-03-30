#include <iostream>
#include <string>
using namespace std;

bool check(const char x, const bool isHeavy, string *left, string *right, string *res)
{
    for (int i=0; i < 3; ++i)
    {
        int diffL = 0, diffR = 0;
        for (int j=0; j < left[i].length(); ++j)
        {
            if (left[i][j] == x) diffL += (isHeavy ? +1 : -1);
        }
        for (int j=0; j < right[i].length(); ++j)
        {
            if (right[i][j] == x) diffR += (isHeavy ? +1 : -1);
        }
        bool isCorrect = true;
        if (diffL < diffR && res[i] != "up") isCorrect = false;
        else if (diffL > diffR && res[i] != "down") isCorrect = false;
        else if (diffL == diffR && res[i] != "even") isCorrect = false;
        if (!isCorrect) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int caseNo=0; caseNo < n; ++caseNo)
    {
        string left[3], right[3], res[3];
        for (int i=0; i < 3; ++i)
        {
            cin >> left[i] >> right[i] >> res[i];
        }
        char ans = '0';
        bool isAnsHeavy = false;

        for (char x='A'; x <= 'L'; ++x)
        {
            for (int isHeavy=0; isHeavy <= 1; ++isHeavy)
            {
                if (check(x, isHeavy, left, right, res))
                {
                    ans = x;
                    isAnsHeavy = isHeavy;
                    break;
                }
            }
            if (ans != '0') break;
        }

        cout << ans << " is the counterfeit coin and it is "
             << (isAnsHeavy ? "light" : "heavy") << "." << endl;
    }
}
