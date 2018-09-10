
#include "Solution096.h"
#include <vector>

using std::vector;

int Solution096::numTrees(int n)
{
    if(n == 0)
        return 0;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            dp[i] += dp[j] * dp[i - 1 - j];
        }
    }
    return dp[n];
}
