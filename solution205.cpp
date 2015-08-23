#include "solution205.h"

Solution205::Solution205()
{
}

bool Solution205::isIsomorphic(string s, string t)
{
    if(s.length() != t.length())
        return false;
    vector<char> dists(128,0);
    vector<char> distt(128,0);
    int len = t.length();
    for(int i =0;i<len;++i)
    {
        if(dists[s[i]] == 0 && distt[t[i]] == 0)
        {
            dists[s[i]] = t[i];
            distt[t[i]] = s[i];
        }
        else if(dists[s[i]] != t[i] || distt[t[i]] != s[i])
            return false;
    }
    return true;
}
