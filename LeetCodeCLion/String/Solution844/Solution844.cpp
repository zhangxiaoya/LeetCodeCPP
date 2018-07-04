
#include "Solution844.h"

bool Solution844::backspaceCompare(string S, string T)
{
    int i = S.length() - 1;
    int j = T.length() - 1;
    int countS = 0;
    int countT = 0;
    while (i >= 0 && j >= 0)
    {
        while (i >= 0 && countS >= 0)
        {
            if (S[i] == '#')
                countS++;
            else
                countS--;
            --i;
            if (countS < 0)
            {
                ++i;
                ++countS;
                break;
            }
        }
        while (j >= 0 && countT >= 0)
        {
            if (T[j] == '#')
                countT++;
            else
                countT--;
            --j;
            if (countT < 0)
            {
                ++j;
                ++countT;
                break;
            }
        }
        if (i >= 0 && j >= 0)
        {
            if (S[i] == T[j])
            {
                i--;
                j--;
            }
            else
                return false;
        }
    }
    while (i >= 0 && countS >= 0)
    {
        if (S[i--] == '#')
            countS ++;
        else
            countS--;
        if(countS < 0)
            return false;
    }

    while (j >= 0 && countT >= 0)
    {
        if (T[j--] == '#')
            countT ++;
        else
            countT--;
        if(countT < 0)
            return false;
    }
    return true;


}