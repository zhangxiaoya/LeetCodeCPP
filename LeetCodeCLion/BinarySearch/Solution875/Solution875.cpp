
#include <cmath>
#include "Solution875.h"

static bool possible(vector<int>& piles, int k, int h)
{
    int time = 0;
    for(auto p :piles)
        time += (p-1) / k + 1;
    if(time <= h)
        return true;
    return false;
}
int Solution875::minEatingSpeed(vector<int> &piles, int H)
{
    int low = 1;
    int high = std::pow(10,9);
    while(low < high)
    {
        int mid = low + (high - low )/ 2;
        if(possible(piles, mid, H) == false)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}