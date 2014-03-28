#include <iostream>
using namespace std;

int main()
{
    double sum = 0;
    for (int i=0; i < 12; ++i)
    {
        double x;
        cin >> x;
        sum += x;
    }
    printf("$%.2lf\n", sum/12);
    return 0;
}
