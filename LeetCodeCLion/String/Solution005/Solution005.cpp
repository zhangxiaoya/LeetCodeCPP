//
// Created by runisys on 18-6-28.
//

#include "Solution005.h"

bool Solution005::isPalindromic(string &s)
{
    for(int i =0, j = s.length()-1;i<j;i++,j--)
    {
        if(s[i] != s[j])
            return false;
    }
    return true;
}

string Solution005::longestPalindrome(string s)
{
    string res = "";
    if(s.empty())
        return res;
    int maxLen = 0;
    for(int i = s.length(); i >0;--i)
    {
        for(int j =0;j+i <= s.length();++j)
        {
            string ss = s.substr(j,i);
            if(isPalindromic(ss))
                return ss;
        }
    }
}