//
// Created by ynzha on 2018/3/7.
//

#include "Solution788.h"

int Solution788::rotatedDigits(int N)
{
    int res = 0;
    for(int i = 1; i< N+1;++i)
    {
        if(isGood(i, false))
            res ++;
    }
    return res;
}

bool Solution788::isGood(int N, int flag)
{
    if(N == 0)
        return flag;
    int d = N % 10;
    if(d == 3 || d == 7 || d == 4)
        return false;
    if(d == 1 || d == 8 || d == 0)
        return isGood(N / 10, flag);
    else
        return isGood(N / 10, true);
}