#include "solution018.h"
#include <algorithm>

Solution018::Solution018()
{
}
vector< vector<int> > Solution018::fourSum(vector<int> &nums, int target)
{
    if(nums.size() < 4)
        return {};
    sort(nums.begin(),nums.end());
    vector< vector<int> > res;
    auto last = nums.end();
    for(auto i = nums.begin();i != last -3;++i)
    {
        for(auto j = i +1 ;j != last -2;++j)
        {
            auto k = j +1;
            auto m = last -1;
            while(k < m)
            {
                if((*i + *j + *k + *m ) < target)
                    k ++;
                else if((*i + *j + *k + *m) > target)
                    m --;
                else
                {
                    res.push_back({*i,*j,*k,*m});
                    k ++;
                    m--;
                }
            }
        }
    }
    sort(res.begin(),res.end());
    res.erase(unique(res.begin(),res.end()),res.end());
    return res;
}
