#include "solution260.h"

Solution260::Solution260()
{
}

vector<int> Solution260::singleNumber(vector<int> &nums)
{
    long long res1 = 0,res2 = 0,res = 0;
    for(auto& i:nums)
        res ^= i;
    long long k = (res & (res-1)) ^ res;
    for(auto& i :nums)
    {
        if(i&k)
            res1 ^= i;
    }
    res2 = res^res1;
    vector<int> vec;
    vec.push_back(res1);
    vec.push_back(res2);
    return vec;
}
