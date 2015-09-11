#include "solution278.h"

Solution278::Solution278()
{

}

int Solution278::firstBadVersion(int n)
{
    int beg = 1;
    int end = n;
    int mid = beg +(end - beg)/2;
    while(beg < end)
    {


        if(isBadVersion(mid))
            end = mid;
        else
            beg = mid + 1;
        mid = beg +(end - beg)/2;
    }
    return mid;
}
