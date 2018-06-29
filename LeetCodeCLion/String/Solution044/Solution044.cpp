
#include "Solution044.h"

bool Solution044::isMatch(string s, string p)
{
    int sIdx = 0;
    int pIdx = 0;
    int ppIdx = -1;
    int ssIdx;
    while(sIdx < s.length())
    {
        if(s[sIdx] == p[pIdx] || '?' == p[pIdx])
        {
            sIdx++;
            pIdx ++;
            continue;
        }
        if(p[pIdx] == '*')
        {
            ppIdx = pIdx;
            ssIdx = sIdx;
            pIdx++;
            continue;
        }
        else if(ppIdx >= 0)
        {
            pIdx = ppIdx    +1;
            ssIdx++;
            sIdx = ssIdx;
            continue;
        }
        return false;
    }
    while(pIdx < p.length() && p[pIdx] == '*')
        pIdx++;
    return pIdx == p.length();
}