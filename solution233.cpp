#include "solution233.h"

Solution233::Solution233()
{

}

int Solution233::countDigitOne(int n)
{
    if(n <=0)
        return 0;
    int countOfOne = 0;
    for(long long p = 1;p<=n;p*=10)
    {
        int a = n / p;
        int b = n % p;
        countOfOne += ((a+8) / 10) * p;
        if(a % 10 == 1)
            countOfOne += (b + 1);
    }
    return countOfOne;
}
