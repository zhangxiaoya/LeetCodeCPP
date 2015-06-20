#include "solution008.h"

Solution008::Solution008()
{
}
int Solution008::atoi(string str)
{
    const int max = 2147483647;
    const int min = -2147483648;
    bool positive = true;
    int len = str.length();
    double result = 0;
    int idx;
    for(idx = 0;idx<len;++idx)
    {
        if(str[idx] == ' ')
            continue;
        else
            break;
    }
    if(str[idx] == '-' && idx < len)
    {
        positive = false;
        idx ++;
    }
    else if(str[idx] == '+' && idx < len)
    {
        idx ++;
    }
    if(str[idx] < '0' || str[idx] > '9' || idx >= len)
        return 0;
    for(;idx <len;++idx)
    {
        if(str[idx] >= '0' && str[idx] <= '9')
        {
            result = result * 10 + (str[idx] - '0');
            if(positive && result > max)
                return max;
            else if(!positive && (-1 * result) < min )
                return min;
        }
        else
            break;
    }
    return (positive ? result :(-1 * result));
}
