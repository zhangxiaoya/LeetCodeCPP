#include "solution026.h"
#include <algorithm>

Solution026::Solution026()
{
}
int Solution026::removeDuplicates(vector<int> &nums)
{
    /*
    if(nums.size() == 0)
        return 0;
    if(nums.size() == 1)
        return 1;
    vector<int>::iterator it1,it2;
    it1 = nums.begin();
    it2 = it1 + 1;
    int len = 1;
    for(;it2 != nums.end();++it2)
    {
        if(*it1 != *it2)
        {
            *(++it1) = *it2;
            ++len;
        }
    }
    return len;
    */
    return distance(nums.begin(),unique(nums.begin(),nums.end()));
}
