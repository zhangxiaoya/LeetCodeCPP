#include "solution027.h"

Solution027::Solution027()
{
}
int Solution027::removeElement(vector<int> &nums, int val)
{
    if(nums.size() == 0)
        return 0;
    int start = 0;
    int end = nums.size() - 1;
    while(start <= end)
    {
        while(nums[start] != val && start <= end)
            start ++;
        while(nums[end] == val && start <= end)
            end --;
        nums[start] = nums[end];
        nums[end] = val;
    }
    return start;
}
