#include "solution198.h"

Solution198::Solution198()
{
}

int Solution198::rob(vector<int>& nums) {
    if(nums.size() == 0){
        return 0;
    }
    if(nums.size() == 1){
        return nums[0];
    }
    result = new int[nums.size()];
    result[0] = nums[0];
    result[1] = max(nums[1],nums[0]);
    for(int i =2;i< nums.size();++i){
        result[i] = max(nums[i] + result[i-2], result[i-1]);
    }
    return result[nums.size()-1];
}
