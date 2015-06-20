#include "solution217.h"

Solution217::Solution217()
{
}

bool Solution217::containsDuplicate(vector<int> &nums)
{
    map<int,int> dump;
    vector<int>::iterator it;
    for(it = nums.begin();it != nums.end();++it)
    {
        if(dump.count(*it))
            return true;
        else
            dump.insert(make_pair(*it,1));
    }
    return false;
}
