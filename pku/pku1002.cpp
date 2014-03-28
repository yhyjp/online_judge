#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

char convert(const char x)
{
    if (x=='A' || x=='B' || x=='C') return '2';
    if (x=='D' || x=='E' || x=='F') return '3';
    if (x=='G' || x=='H' || x=='I') return '4';
    if (x=='J' || x=='K' || x=='L') return '5';
    if (x=='M' || x=='N' || x=='O') return '6';
    if (x=='P' || x=='R' || x=='S') return '7';
    if (x=='T' || x=='U' || x=='V') return '8';
    if (x=='W' || x=='X' || x=='Y') return '9';
    return x;
}

int main()
{
    int n;
    cin >> n;
    map<int,int> count;
    for (int i=0; i < n; ++i)
    {
        string s;
        cin >> s;
        s.erase(remove(s.begin(), s.end(), '-'), s.end());
        for (int i=0; i < s.length(); ++i)
        {
            s[i] = convert(s[i]);
        }
        int x;
        sscanf(s.c_str(), "%d", &x);
        ++count[x];
    }

    map<int,int>::iterator it = count.begin();
    bool hasDuplicates = false;
    while (it != count.end())
    {
        if (it->second > 1)
        {
            hasDuplicates = true;
            int a = it->first/10000;
            int b = it->first%10000;
            printf("%03d-%04d %d\n", a, b, it->second);
        }
        ++it;
    }
    if (hasDuplicates == false)
    {
        cout << "No duplicates." << endl;
    }
    
    return 0;
}
