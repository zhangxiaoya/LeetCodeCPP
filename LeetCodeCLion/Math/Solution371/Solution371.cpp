
#include "Solution371.h"

int Solution371::getSum(int a, int b)
{
    int sum = b;
    while(a != 0)
    {
        sum = a ^ b;
        a = a & b;
        a = a << 1;
        b = sum;
    }
    return sum;
}