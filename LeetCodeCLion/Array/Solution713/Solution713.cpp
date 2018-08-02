
#include "Solution713.h"

int Solution713::numSubarrayProductLessThanK(vector<int> &nums, int k)
{
    int res = 0;
    long long product = 1;

    int first = 0;
    for (int last = 0; last < nums.size(); ++last)
    {
        product *= nums[last];
        while (first <= last && product >= k)
        {
            product /= nums[first];
            first++;
        }
        res += (last - first + 1);
    }
    return res;
}