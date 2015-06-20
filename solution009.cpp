#include "solution009.h"

Solution009::Solution009()
{
}

bool Solution009::isPalindrome(int x)
{
    if(x < 0)
        return false;
    int high = 1;
    int low = 10,clow = 1;
    int t =x;
    while(t/10)
    {
        t /=10;
        high *= 10;
    }
    while(high/10)
    {
        int h = (x / high)%10;
        int l = (x % low)/clow;
        if( h==l)
        {
            clow *= 10;
            low *= 10;
            high /= 10;
        }
        else
            return false;
    }
    return true;
}
