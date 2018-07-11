//
// Created by runisys on 18-6-28.
//

#include "Solution322.h"
#include <algorithm>
#include <limits>

int Solution322::coinChange(vector<int> &coins, int amount)
{
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;
    for (int i = 1; i <= amount; ++i)
    {
        int curMin = dp[i];
        for (int j = 0; j < coins.size(); ++j)
        {
            if (i >= coins[j])
                curMin = std::min(curMin, dp[i - coins[j]] + 1);
        }
        dp[i] = curMin;
    }
    return dp[amount] > amount ? -1 : dp[amount];
}
