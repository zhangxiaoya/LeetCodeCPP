
#include "Solution895.h"

void Solution895::push(int x)
{
    s.push_back(x);
    frequency[x]++;
}

int Solution895::pop()
{
    int maxFreq = 0;
    for (auto item: frequency)
        if (item.second > maxFreq)
            maxFreq = item.second;

    for (int i = s.size() - 1; i >= 0; --i)
    {
        int reference = s[i];
        if (frequency[reference] == maxFreq)
        {
            frequency[reference]--;
            s.erase(s.begin() + i);
            return reference;
        }
    }
}
