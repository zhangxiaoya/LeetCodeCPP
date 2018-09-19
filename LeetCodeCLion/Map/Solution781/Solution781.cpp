
#include "Solution781.h"
#include <map>
using std::map;

int Solution781::numRabbits(vector<int> &answers)
{
    map<int,int> counter;
    for(auto count:answers)
        counter[count] ++;
    int res = 0;
    for(auto count : counter)
    {
        res += ((count.second + count.first)/ (count.first + 1) * (count.first + 1));
    }
    return res;
}
