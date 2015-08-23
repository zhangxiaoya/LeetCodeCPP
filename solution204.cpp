#include "solution204.h"

Solution204::Solution204()
{
}

int Solution204::countPrimes(int n)
{
    bool* isPrime = new bool[n] ;
    for(int i=2;i<n;++i)
        isPrime[i] = true;
    for(int i = 2;i*i <n;++i)
    {
        if(!isPrime[i])
            continue;
        for(int j=i*i;j<n;j+=i)
            isPrime[j] = false;
    }
    int count = 0;
    for(int i=2;i<n;++i)
        if(isPrime[i])
            count ++;
    delete []isPrime;
    return count;
}
