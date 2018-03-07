//
// Created by ynzha on 2018/3/7.
//

#include "Solution070.h"

int Solution070::climbStairs(int n)
{
    if(n <= 0)
        return 0;
    if( n < 3)
        return n;
    int a = 1,b = 2;
    n -= 2;
    while( n-- )
    {
        int t = a + b;
        a = b;
        b = t;
    }
    return b;
}