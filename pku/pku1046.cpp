// やるだけ.
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

struct RGB
{
    int r_, g_, b_;

    double calcDist(const RGB &rgb) const
    {
        const double dr = r_ - rgb.r_;
        const double dg = g_ - rgb.g_;
        const double db = b_ - rgb.b_;
        return sqrt(dr*dr + dg*dg + db*db);
    }
};

int main()
{
    RGB rgb[16];
    for (int i=0; i < 16; ++i)
    {
        cin >> rgb[i].r_ >> rgb[i].g_ >> rgb[i].b_;
    }

    while (true)
    {
        RGB in;
        cin >> in.r_ >> in.g_ >> in.b_;
        if (in.r_ == -1) break;
        
        int minIndex = 0;
        double minDist = rgb[0].calcDist(in);
        for (int i=1; i < 16; ++i)
        {
            const double dist = in.calcDist(rgb[i]);
            if (dist < minDist)
            {
                minDist = dist;
                minIndex = i;
            }
        }

        printf("(%d,%d,%d) maps to (%d,%d,%d)\n",
               in.r_, in.g_, in.b_,
               rgb[minIndex].r_, rgb[minIndex].g_, rgb[minIndex].b_);
    }
    
    return 0;
}
