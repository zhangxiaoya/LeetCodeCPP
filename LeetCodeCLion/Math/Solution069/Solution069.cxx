//
// Created by ynzha on 2018/3/7.
//

#include "Solution069.h"

int Solution069::mySqrt(int x)
{
    if(x <= 0)
        return 0;
    int right = x;
    int left = 1;

    while(true)
    {
        int mid = (left + right) / 2;
        if(mid > x / mid)
            right = mid -1;
        else if(mid+1 > x / (mid+1))
            return mid;
        else
            left =  mid + 1;
    }
}
