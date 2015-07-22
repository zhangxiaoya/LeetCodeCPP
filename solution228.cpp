#include "solution228.h"

Solution228::Solution228()
{

}

vector<string> Solution228::summaryRanges(vector<int> &nums)
{
    vector<string> res;
    if(nums.empty())
        return res;
    int beg = nums[0];
    bool flag = true;
    for(int i=1;i<nums.size();++i)
    {
        if(nums[i] == (nums[i-1] +1))
            if(i < (nums.size() - 1))
                continue;
            else
            {
               res.push_back(std::to_string(beg) + "->"+std::to_string(nums[i]));
               flag = false;
            }
        else
        {
            if(nums[i-1] == beg)
                res.push_back(std::to_string(beg));
            else
                res.push_back(std::to_string(beg) + "->"+std::to_string(nums[i-1]));
            beg = nums[i];
            if(i == nums.size()-1)
                flag = true;
        }
    }
    if(flag)
        res.push_back(std::to_string(beg));
    return res;
}
