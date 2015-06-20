#include "solution080.h"

Solution080::Solution080()
{
}
int Solution080::removeDuplicates(vector<int> &nums)
{
    int len = nums.size();
    if(len < 3)
        return len;
    vector<int>::iterator it1,it2;
    it1 = nums.begin();
    len =1;
    int flag = 1;
    for(it2 = it1+1;it2 != nums.end();++it2)
    {
        if(*it1 == *it2)
        {
            if(flag ==1)
            {
                *(++it1) = *it2;
                len ++;
            }
            flag ++;
            continue;
        }
        else
        {
            *(++it1) = *it2;
            ++len;
            flag = 1;
        }
    }
    return len;
}
