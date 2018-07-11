
#include "Solution287.h"

int Solution287::findDuplicate(vector<int> &nums)
{
    long long sum = 0;
    for(auto a:nums)
        sum += a;
    long long  n = nums.size() -1;
    return sum - ((n+1) * n / 2);
}