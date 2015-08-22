#include "solution231.h"

Solution231::Solution231()
{
}

bool Solution231::isPowerOfTwo(int n)
{
    if(n <= 0)
        return false;
    return  (n & (n-1)) == 0;
}
