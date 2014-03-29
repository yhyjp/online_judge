#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Dna
{
    string s;
    int distance;

    bool operator<(const Dna& other) const
    {
        return distance < other.distance;
    }
};

int calcDistance(const string& s)
{
    int res = 0;
    for (int i=0; i < s.length(); ++i)
    {
        for (int j=i+1; j < s.length(); ++j)
        {
            if (s[i] > s[j]) ++res;
        }
    }
    return res;
}

int main()
{
    int len, n;
    cin >> len >> n;
    vector<Dna> dna(n);
    for (int i=0; i < n; ++i)
    {
        cin >> dna[i].s;
        dna[i].distance = calcDistance(dna[i].s);
    }
    sort(dna.begin(), dna.end());
    for (int i=0; i < n; ++i)
    {
        cout << dna[i].s << endl;
    }
    return 0;
}
