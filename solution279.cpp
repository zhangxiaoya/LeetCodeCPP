#include "solution279.h"

Solution279::Solution279()
{

}

int Solution279::numSquares(int n)
{
    vector<int> dp{0};
    int min_snum = INT_MAX;
    for(int i=1;i<=n;++i)
    {
        min_snum = INT_MAX;
        for(int j = 1;j*j<=i;j++)
            min_snum = min(min_snum,(dp[i-j*j]+1));
        dp.push_back(min_snum);
    }
    return dp[n];
//    static vector<int> dp {0};
//    while (dp.size() <= n) {
//        int m = dp.size(), squares = INT_MAX;
//        for (int i=1; i*i<=m; ++i)
//            squares = min(squares, dp[m-i*i] + 1);
//        dp.push_back(squares);
//    }
//    return dp[n];
}
int Solution279::min(int a, int b)
{
    return a>b?b:a;
}
