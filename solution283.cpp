#include "solution283.h"

Solution283::Solution283()
{

}

void Solution283::moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    if(n <1)
        return;
//    int count = 0;
//    for(int i = 0;i<n;++i)
//        if(nums[i] == 0)
//            count++;
    int i =0,j =0;
    while(j<n)
    {
        if(nums[j] == 0)
            j++;
        else
            nums[i++] = nums[j++];
    }
    while(i<n)
        nums[i++] = 0;
}
