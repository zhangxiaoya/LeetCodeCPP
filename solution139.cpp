#include "solution139.h"

Solution139::Solution139()
{

}

bool Solution139::wordBreak(string s, unordered_set<string> &wordDict)
{
    if(s.empty())
        return true;
    int len = s.length();

    vector<bool> dp(len+1,false);

    dp[0] = true;

    for(int i=0;i<len;++i)
    {
        if(!dp[i])
            continue;
        for(unordered_set<string>::iterator it = wordDict.begin();it != wordDict.end();++it)
        {
            int l = (*it).length();
            int end = i+l;

            if(end  > len)
                continue;
            if(dp[end])
                continue;
            if(s.substr(i,l) == *it)
                dp[end] = true;
        }
    }
    return dp[len];

//    if(s.empty())
//        return true;
//    string word;
//    int len = 1;
//    word = s.substr(0,len);
//    while(wordDict.find(word) != wordDict.end())
//    {
//        s = s.substr(len);
//        if(wordBreak(s,wordDict))
//            return true;
//        s = word + s;
//        len ++;
//        if(len < s.length())
//            word = s.substr(0,len);
//    }
//    return false;
}
