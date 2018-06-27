//
// Created by runisys on 18-6-27.
//

#include "Solution858.h"


int Solution858::mirrorReflection(int p, int q)
{
    if (p < 0 || q < 0 || p < q)
        return -1;
    double x = p * p / (double) q;
    int k = 1;
    while (true)
    {
        if (int(k * x) % p == 0)
            break;
        else
            k++;
    }
    if (k % 2 == 0)
        return 0;
    else
    {
        if (((int) (k * x) / p) % 2 == 0)
            return 2;
        else
            return 1;
    }
}