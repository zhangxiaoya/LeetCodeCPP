//
// Created by runisys on 18-6-28.
//

#include "Solution322.h"
#include <algorithm>
#include <limits>

int Solution322::coinChange(vector<int> &coins, int amount)
{
    std::sort(coins.begin(), coins.end(), std::greater<int>());
    vector<int> ress;
    help(coins, amount, 0, 0, ress);
    if(ress.empty())
        return -1;
    std::sort(ress.begin(), ress.end());
    return ress[0];
}

void Solution322::help(vector<int> &coins, int amount, int coinIdx, int oldCount, vector<int>& ress)
{
    int count = 0;
    while (amount > 0)
    {
        amount -= coins[coinIdx];
        count++;
    }
    if (amount == 0)
    {
        ress.push_back(count + oldCount);
    }
    while (count > 0)
    {
        count--;
        amount += coins[coinIdx];
        for (int i = coinIdx+1; i < coins.size(); i++)
        {
            help(coins, amount, i, oldCount + count, ress);
        }
    }
}
