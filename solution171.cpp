#include "solution171.h"

Solution171::Solution171()
{

}

int Solution171::titleToNumber(std::string s)
{
    if(s.empty())
        return 0;
    int res = 0;

    for(int i = 0;i< s.length();++i)
    {
        res *= 26;
        res += s[i] - 'A' + 1;
    }
    return res;
}
