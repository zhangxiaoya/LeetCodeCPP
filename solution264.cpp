#include "solution264.h"

Solution264::Solution264()
{
}

int Solution264::nthUglyNumber(int n)
{
    vector<int> uglys;
    uglys.push_back(1);

    int i2(0),i3(0),i5(0);
    int c2(2),c3(3),c5(5);
    int last = 1;
    int i = 1;
    while(i < n)
    {
        while(c2 <= last) c2 = 2 * uglys[++i2];
        while(c3 <= last) c3 = 3 * uglys[++i3];
        while(c5 <= last) c5 = 5 * uglys[++i5];
        last = min(c2,min(c3,c5));
        uglys.push_back(last);
        ++i;
    }
    return uglys[n-1];
}
