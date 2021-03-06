#include "solution041.h"

Solution041::Solution041()
{

}

void Solution041::swap(int &a, int &b)
{
    a = a+b;
    b = a-b;
    a = a-b;
}
int Solution041::firstMissingPositive(vector<int> &nums)
{
    if(nums.size() < 1)
        return 1;
    int i = 0;
    while (i<nums.size()) {
        if(nums[i] <=0 || nums[i] > nums.size() || nums[i] == nums[nums[i]-1])
            ++i;
        else
            swap(nums[i],nums[nums[i]-1]);
    }
    for(i=0;i<nums.size();++i)
        if(nums[i] != i+1)
            break;
    return i+1;
}
