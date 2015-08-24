#include "solution137.h"

Solution137::Solution137()
{
}

int Solution137::singleNumber(vector<int> &nums)
{
    int one = 0,two = 0;
    for(int i =0; i< nums.size();++i)
    {
        one = (one ^ nums[i]) & ~two;
        two = (two ^ nums[i]) & ~one;
    }
    return one;
}
