#include "solution263.h"

Solution263::Solution263()
{
}

bool Solution263::isUgly(int num)
{
    if(num == 1)
        return true;
    int primeris[3] = {2,3,5};
    for(int i = 0;i< 3;++i)
    {
        while(num%primeris[i] == 0)
            num /= primeris[i];
    }
    return num == 1;

//    while((num%2 == 0) || (num%3 ==0) || (num%5==0))
//    {
//        if(num%2 == 0)
//            num /= 2;
//        if(num%3 == 0)
//            num /=3;
//        if(num%5 == 0)
//            num /= 5;
//        if(num == 1)
//            return true;
//    }
//    return false;
}
