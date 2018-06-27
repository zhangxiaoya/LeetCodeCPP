//
// Created by runisys on 18-6-27.
//

#include "Solution856.h"

int Solution856::scoreOfParentheses(string S)
{
    if (S.empty())
        return 0;
    if (S[1] == ')')
        return 1 + scoreOfParentheses(S.substr(2));
    else
    {
        int diff = 1;
        int i = 1;
        for (; i < S.length(); ++i)
        {
            if (S[i] == ')')
            {
                diff--;
                if (diff == 0)
                    break;
            }
            else
                ++diff;
        }
        return 2 * scoreOfParentheses(S.substr(1, i-1)) + scoreOfParentheses(S.substr(i + 1));
    }
}