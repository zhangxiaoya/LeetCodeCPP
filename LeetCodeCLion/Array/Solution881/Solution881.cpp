
#include "Solution881.h"
#include <algorithm>

int Solution881::numRescueBoats(vector<int> &people, int limit)
{
    std::sort(people.begin(), people.end());
    int i = 0;
    int j = people.size()-1;
    int count = 0;
    while(i <= j)
    {
        if(people[j] + people[i] <= limit)
        {
            j--;
            i++;
        }
        else
            j--;
        count++;
    }
    return count;
}
