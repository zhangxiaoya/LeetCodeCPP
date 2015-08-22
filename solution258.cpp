#include "solution258.h"

Solution258::Solution258()
{
}

int Solution258::addDigits(int num)
{
    int tnum = 0;
    while(num > 9)
    {
        while (num) {
            tnum += (num % 10);
            num /= 10;
        }
        num = tnum;
        tnum =0;
    }
    return num;
}
