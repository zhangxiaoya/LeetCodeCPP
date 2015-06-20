#include "solution122.h"

Solution122::Solution122()
{
}
int Solution122::maxProfit(vector<int> &prices)
{
    if(prices.size() < 2)
        return 0;
    int sumPorfit = 0;
    for(auto i = prices.begin()+1;i!=prices.end();++i)
    {
        int t = *i - *(i-1);
        if(t > 0)
            sumPorfit += t;
    }
    return sumPorfit;
}
