#include "solution198.h"

Solution198::Solution198()
{
}

int Solution198::help(int index, vector<int>& nums){
    if(index < 0){
        return 0;
    }
    if(result[index] == -1){
        result[index] = max(nums[index] + help(index-2, nums), help(index-1,nums));
    }
    return result[index];
}
int Solution198::rob(vector<int>& nums) {
    if(nums.size() == 0){
        return 0;
    }
    result = new int[nums.size()];
    for(int i =0;i< nums.size();++i){
        result[i] = -1;
    }
    return help(nums.size()-1,nums);
}
