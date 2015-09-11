#include "solution020.h"

Solution020::Solution020()
{

}

bool Solution020::isValid(std::string s)
{
    if(s.empty())
        return false;
    stack<char> ss;
    int i =0;
    int len = s.length();
    while(i < len)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            ss.push(s[i]);
        else
        {
            if(ss.empty())
                return false;
            if(s[i] == ')')
            {
                if(ss.top() == '(')
                    ss.pop();
                else
                    return false;
            }
            else if(s[i] == ']')
            {
                if(ss.top() == '[')
                    ss.pop();
                else
                    return false;
            }
            else if(s[i] == '}')
            {
                if(ss.top() == '{')
                    ss.pop();
                else
                    return false;
            }
        }
        ++i;
    }
    if(ss.empty())
        return true;
    else
        return false;
}
