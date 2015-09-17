#include "solution091.h"

Solution091::Solution091()
{

}

int Solution091::numDecodings(std::string s)
{
    if(s.empty() || s[0] == '0')
        return 0;
    int len = s.length();
    int *dp = new int[len+1];
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 1;i<len;++i)
    {
        if(isValid(s[i]) && isValid(s[i-1],s[i]))
        {
            dp[i+1] = dp[i] + dp[i-1];
            continue;
        }
        if(isValid(s[i]) && !isValid(s[i-1],s[i]))
        {
            dp[i+1] = dp[i];
            continue;
        }
        if(!isValid(s[i]) && isValid(s[i-1],s[i]))
        {
            dp[i+1] = dp[i-1];
            continue;
        }
        return 0;
    }
    return dp[len];
}

bool Solution091::isValid(char a)
{
    return a > '0' && a <= '9';
}
bool Solution091::isValid(char a, char b)
{
    return (a == '1' && b >= '0' && b <= '9') || \
            (a == '2' && b>='0' && b <= '6');
}
