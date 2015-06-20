#include "solution066.h"

Solution066::Solution066()
{
}

vector<int> Solution066::plusOne(vector<int> &digits)
{
    if(digits.empty())
        return digits;
    vector<int>::iterator it;
    it = digits.end() - 1;
    *it += 1;
    bool flag = false;
    while(it != digits.begin())
    {
        if(flag)
             *it += 1;
        if(*it > 9)
        {
            *it = *it % 10;
            flag = true;
        }
        else
            flag = false;
        --it;
    }
    if(flag)
        *it += 1;
    if(*it > 9)
    {
        *it = *it % 10;
        digits.insert(digits.begin(),1);
    }
    return digits;
}
