//
// Created by runisys on 18-7-18.
//

#include "Solution868.h"
#include <limits>

int Solution868::binaryGap(int N)
{
    int start = -1;
    int end = -1;
    int idx = 0;
    int maxDiff = std::numeric_limits<int>::min();
    while(N)
    {
        if(N & 1)
        {
            if(start == -1)
                start = idx;
            else
            {
                end = idx;
                auto diff = end - start;
                maxDiff = maxDiff > diff ? maxDiff : diff;
                start = end;
            }
        }
        N >>= 1;
        idx++;
    }
    maxDiff = end == -1? 0: maxDiff;
    return maxDiff;
}