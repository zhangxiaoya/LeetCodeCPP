
#include "Solution338.h"

vector<int> Solution338::countBits(int num)
{
    vector<int> res;
    res.push_back(0);
    if(num == 0)
        return res;
    res.push_back(1);
    if(num == 1)
        return res;
    for(int i = 2;i<=num;++i)
        res.push_back(res[i >> 1] + res[i % 2]);
    return res;
}