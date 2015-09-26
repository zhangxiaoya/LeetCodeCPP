#include "solution097.h"

Solution097::Solution097()
{

}

bool Solution097::isInterleave(string s1, string s2, string s3)
{
    int len1 = s1.length();
    int len2 = s2.length();
    int len3 = s3.length();

    if(len1 + len2 != len3)
        return false;
    vector<vector<bool> > dp(len1+1, vector<bool>(len2+1,false));
    dp[0][0] = true;
    for(int i=1;i<=len1;++i)
        dp[i][0] = dp[i-1][0] & (s1[i-1] == s3[i-1]);

    for(int j=1;j<=len2;++j)
        dp[0][j] = dp[0][j-1] & (s2[j-1] == s3[j-1]);

    for(int i = 1;i<=len1;++i)
    {
        for(int j=1;j<=len2;++j)
            dp[i][j] = (dp[i][j-1] & (s2[j-1] == s3[i+j-1])) || (dp[i-1][j] & (s1[i-1] == s3[i+j-1]));
    }
    return dp[len1][len2];
}
