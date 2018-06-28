//
// Created by runisys on 18-6-28.
//

#include "Solution647.h"

bool Solution647::isPalindromic(string &s)
{
    for(int i =0, j = s.length()-1;i<j;i++,j--)
    {
        if(s[i] != s[j])
            return false;
    }
    return true;
}

int Solution647::countSubstrings(string s)
{
    int res = 0;
    if (s.empty())
        return res;

    for (int i = 1; i <= s.length(); ++i)
    {
        for (int j = 0; j < s.length() - i + 1; ++j)
        {
            string ss = s.substr(j, i);
            if (isPalindromic(ss))
                res++;
        }
    }
    return res;
}