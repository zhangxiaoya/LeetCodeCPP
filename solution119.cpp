#include "solution119.h"

Solution119::Solution119()
{
}
vector<int> Solution119::getRow(int rowIndex)
{
    vector<int> res;
    vector<int> tmp;
    if(rowIndex < 0)
        return res;
    tmp.push_back(1);
    if(rowIndex == 0)
        return tmp;

    for(int i = 1;i< rowIndex+1;++i)
    {
        res.clear();
        int j;
        for(j =0;j<i;++j)
        {
            if(j ==0)
                res.push_back(0 + tmp[j]);
            else
                res.push_back(tmp[j-1] + tmp[j]);
        }
        res.push_back(tmp[j-1] + 0);
        tmp.clear();
        tmp.insert(tmp.begin(),res.begin(),res.end());
    }
    return res;
}
