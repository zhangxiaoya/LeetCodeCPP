//
// Created by ynzha on 2018/3/9.
//

#include "Solution532.h"
#include <algorithm>

using namespace std;

int Solution532::findPairs(vector<int> &nums, int k)
{
    if(nums.size() == 0)
        return 0;
    sort(nums.begin(), nums.end());
    int result = 0;
    for(int i = 0; i< nums.size()-1;++i)
    {
        for(int j = i+1;j < nums.size();++j)
        {
            if(nums[j] - nums[i] == k)
            {
                result ++;
                while(j < nums.size() -1 && nums[j] == nums[j+1])
                    j++;
            }
        }
        while(i < nums.size()-1 && nums[i] == nums[i+1])
            i++;
    }
    return result;
}
