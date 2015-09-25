#include "solution115.h"

Solution115::Solution115()
{

}

int Solution115::numDistinct(std::string s, std::string t)
{
//    int lenT = t.length();
//    int lenS = s.length();

//    vector<vector<int> > dp(lenS+1, vector<int>(lenT+1,0));
//    for(int i=0;i<lenS+1;++i)
//        dp[i][0]= 1;
//    for(int i = 1;i<=lenS;i++)
//    {
//        for(int j=1;j<=lenT;++j)
//        {
//            if(s[i-1] == t[j-1])
//                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
//            else
//                dp[i][j] = dp[i-1][j];
//        }
//    }
//    return dp[lenS][lenT];
    int len = t.length();
    vector<int> dp(len+1,0);
    dp[0] = 1;
    for(int i = 0;i<s.length();++i)
    {
        for(int j=len-1;j>=0;--j)
            if(s[i] == t[j])
                dp[j+1] += dp[j];
    }
    return dp[len];
}
