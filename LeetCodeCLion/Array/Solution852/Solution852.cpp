
#include "Solution852.h"
#include <limits>

int Solution852::peakIndexInMountainArray(vector<int> &A)
{
    int maxInt = std::numeric_limits<int>::min();
    int maxIdx = -1;
    for(int i =0; i< A.size();++i)
    {
        if (maxInt < A[i])
        {
            maxIdx = i;
            maxInt = A[i];
        }
    }
    return maxIdx;
}