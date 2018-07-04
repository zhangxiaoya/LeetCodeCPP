
#include "Solution050.h"

double Solution050::myPow(double x, int n)
{
    long long N;
    if (n == 0)
        return 1;
    if (n < 0)
    {
        N = -1 * (long long)n;
        x = 1 / x;
    }
    else
        N = n;
    return N % 2 == 0 ? myPow(x * x, N / 2) : x * myPow(x * x, N / 2);
}