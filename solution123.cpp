#include "solution123.h"

Solution123::Solution123()
{
}
int Solution123::maxProfit(vector<int> &prices)
{
    if(prices.size() < 2)
        return 0;
    int len = prices.size();
    vector<int> f(len,0);
    vector<int> g(len,0);

    for(int i = 1,low = prices[0];i<len;++i)
    {
        low =min(low,prices[i]);
        f[i] = max(f[i-1],prices[i] - low);
    }
    for(int i =len -2,high = prices[len-1];i>=0;--i)
    {
        high = max(high,prices[i]);
        g[i] = max(g[i+1],high - prices[i]);
    }
    int maxProfit = 0;
    for(int i =0;i<len;++i)
    {
        maxProfit = max(maxProfit,f[i] + g[i]);
    }
    return maxProfit;
}
