#include "solution155.h"

Solution155::Solution155()
{

}

void Solution155::push(int x)
{
    s1.push(x);
    if(!s2.empty() && getMin() > x)
        s2.push(x);
}

void Solution155::pop()
{
    if(s1.top() == getMin())
        s2.pop();
    s1.pop();
}

int Solution155::top()
{
    return s1.top();
}

int Solution155::getMin()
{
    if(s2.empty())
        return 0x7fffffff;
    else
        return s2.top();
}
