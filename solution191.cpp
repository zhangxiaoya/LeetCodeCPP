#include "solution191.h"

Solution191::Solution191()
{
}

int Solution191::hammingWeight(uint32_t n)
{
    int num = 0;
    while(n)
    {
        n &= (n-1);
        num ++;
    }
    return num;
}
