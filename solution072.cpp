#include "solution072.h"

Solution072::Solution072()
{

}

int Solution072::minDistance(std::string word1, std::string word2)
{
    int len1 = word1.length();
    int len2 = word2.length();

    vector<vector<int> > dp(len1+1,vector<int>(len2+1,0));
    for(int i=0;i<len1+1;++i)
        dp[i][0] = i;
    for(int i=0;i<len2+1;++i)
        dp[0][i] = i;
    for(int i=1;i<len1+1;++i)
    {
        for(int j=1;j<len2+1;++j)
        {
            if(word1[i-1] == word2[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1])) + 1;
        }
    }
    return dp[len1][len2];
}
