#include "solution121.h"

Solution121::Solution121()
{
}
int Solution121::maxProfit(vector<int> &prices)
{
    if(prices.size() < 2)
        return 0;
    int profit = 0;
    int low = prices[0];
    for(auto i = prices.begin();i!=prices.end();++i)
    {
        profit = max(profit,*i - low);
        low = min(low,*i);
    }
    return profit;
}
