//
// Created by ynzha on 2018/3/7.
//

#include "Solution746.h"

#define min(a,b)    (((a) < (b)) ? (a) : (b))

int Solution746::minCostClimbingStairs(vector<int> &cost)
{
    if(cost.size() <= 0)
        return 0;
    int len = cost.size();
    int costSumA = 0;
    int costSumB = 0;
    for(int i = len -1;i >=0;--i)
    {
        int t = cost[i] + min(costSumA, costSumB);
        costSumA = costSumB;
        costSumB = t;
    }
    return min(costSumA, costSumB);

}
