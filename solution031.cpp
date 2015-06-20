#include "solution031.h"
#include <algorithm>
Solution031::Solution031()
{
}
void Solution031::nextPermutation(vector<int> &nums)
{
    if(nums.size() < 2)
        return;
    int len = nums.size();
    int k = len - 2;
    while(k >= 0 && nums[k] >= nums[k+1])
        k--;
    if(k < 0)
    {
        sort(nums.begin(),nums.end());
        return;
    }
    int i = len -1;
    while(i > k && nums[i] <= nums[k])
        --i;
    swap(nums[i],nums[k]);
    reverse(nums.begin()+k+1,nums.end());
}

void Solution031::swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
