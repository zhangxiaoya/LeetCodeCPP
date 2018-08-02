
#include "Solution087.h"
bool Solution087::help(string s1, string s2, unordered_map<string, bool> &dp)
{
    int len = s1.length();
    bool res = false;
    if (s1.empty())
        return true;
    if (s1 == s2)
        return true;
    else
    {
        if(dp.count(s1+s2))
            return dp[s1+s2];
        for(int i = 1;i< len; ++i)
        {
            res |= (help(s1.substr(0,i), s2.substr(0,i),dp) && help(s1.substr(i, len -i),s2.substr(i, len - i), dp));
            res |= (help(s1.substr(0,i),s2.substr(len-i, i),dp) && help(s1.substr(i), s2.substr(0,len - i), dp));
            if(res == true)
                break;
        }
    }
    return dp[s1+s2] = res;
}

#include <unordered_map>

using std::unordered_map;

bool Solution087::isScramble(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    unordered_map<string, bool> dp;
    return help(s1,s2,dp);

}