#include "solution028.h"

Solution028::Solution028()
{
}
int Solution028::strStr(string haystack, string needle)
{
    if(haystack.length() < needle.length())
        return -1;
    for(int i=0;;++i)
    {
        for(int j = 0;;++j)
        {
            if(j == needle.length())
                return i;
            if(i + j == haystack.length())
                return -1;
            if(haystack[i+j] != needle[j])
                break;
        }
    }
}
