

#include <cstdlib>
#include <limits>
#include "Solution029.h"

int Solution029::divide(int dividend, int divisor)
{
    if(divisor == 0)
        return std::numeric_limits<int>::max();
    if(dividend == std::numeric_limits<int>::min() && divisor == -1)
        return std::numeric_limits<int>::max();

    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
    long long dd = labs(dividend);
    long long ds = labs(divisor);

    long long res = 0;
    while (dd >= ds)
    {
        long long t = ds;
        long long power = 1;
        while (dd >= t)
        {
            t <<= 1;
            power <<= 1;
        }
        power >>= 1;
        t >>= 1;
        dd -= t;
        res += power;
    }
    res = (sign == 1) ? res : -res;
    return res;
}