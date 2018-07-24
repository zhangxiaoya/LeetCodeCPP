
#include "Solution372.h"

long long int Solution372::powAndMod(int val, int n)
{
    long long res = 1;
    if (n == 0)
        return res;
    val %= 1337;
    for (int i =     0; i < n; ++i)
    {
        res *= val;
        res %= 1337;
    }
    return res;
}

int Solution372::superPow(int a, vector<int> &b)
{
    long long res = 1;
    if(b.empty())
        return res;
    int digits = b.back();
    b.pop_back();

    return (powAndMod(superPow(a,b),10) * powAndMod(a, digits)) % 1337;
}