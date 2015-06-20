#include "solution189.h"

#include <iostream>
using namespace std;


Solution189::Solution189()
{
}
void Solution189::rotate(int nums[], int n, int k)
{
    int result[n];
    for(int i = 0;i<n;++i)
    {
        result[i] = nums[(n-k+i) % n];
    }
//    nums = result;
    for(int i =0;i<7;++i)
        *(nums+i) = result[i];
//    for(int i =0;i<7;++i)
//        cout<<nums[i]<<endl;
}
