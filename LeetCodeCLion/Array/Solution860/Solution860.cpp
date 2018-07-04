
#include "Solution860.h"

bool Solution860::lemonadeChange(vector<int> &bills)
{
    vector<int> changes = {0,0,0};
    for(auto bill : bills)
    {
        if(bill == 5)
        {
            changes[2] ++;
            continue;
        }
        if(bill == 10)
        {
            changes[1] ++;
            if(changes[2] < 1)
                return false;
            changes[2] --;
            continue;
        }
        if(bill == 20)
        {
            changes[0] ++;
            if(changes[1] > 0 && changes[2] > 0)
            {
                changes[1] --;
                changes[2] --;
                continue;
            }
            else if(changes[2] > 3)
            {
                changes[2] -= 3;
                continue;
            }
            else
                return false;
        }
    }
    return true;
}