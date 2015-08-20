#include "solution202.h"

Solution202::Solution202()
{

}

bool Solution202::isHappy(int n)
{
    int t;
    while(true)
    {
        t = 0;
        if(n == 1) return true;
        if(n == 4) return false;
        while(n)
        {
            t += (n % 10) * (n % 10);
            n /=10;
        }
        n = t;
    }
}
