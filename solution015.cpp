#include "solution015.h"
#include <algorithm>

Solution015::Solution015()
{
}

vector< vector<int> > Solution015::threeSum(vector<int> &nums)
{
    if(nums.size() < 3)
        return {};
    sort(nums.begin(),nums.end());
    vector< vector<int> > res;
    const int target = 0;
    auto last = nums.end();
    for(auto i = nums.begin();i != last - 2;++i)
    {
        if(i != nums.begin() && *i == *(i-1))
            continue;
        auto j = i+1;
        auto k = last - 1;
        while(j < k)
        {
            if(*i + *j + *k < target)
            {
                ++j;
                while(*j == *(j-1) && j < k)
                    ++j;
            }
            else if(*i + *j + *k > target)
            {
                --k;
                while(*k == *(k+1) && j < k)
                    --k;
            }
            else
            {
                res.push_back({*i,*(j++),*(k--)});
                while(*j == *(j-1) && j < k)
                    ++j;
                while(*k == *(k+1) && j < k)
                    --k;
            }
        }
    }
    return res;
}
