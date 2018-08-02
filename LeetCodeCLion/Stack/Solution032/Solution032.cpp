
#include "Solution032.h"
#include <stack>

using std::stack;

int Solution032::longestValidParentheses(string s)
{
    int longest = 0;
    stack<int> ss;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
            ss.push(i);
        else
        {
            if (!ss.empty())
            {
                if (s[ss.top()] == '(')
                    ss.pop();
                else
                    ss.push(i);
            }
            else
                ss.push(i);
        }
    }
    if (ss.empty())
        return s.length();
    else
    {
        int end = s.length();
        int start = 0;
        while(!ss.empty())
        {
            start = ss.top();
            longest = std::max(longest, end-start -1);
            end = start;
            ss.pop();
        }
        longest = std::max(longest, start);
    }
    return  longest;
}