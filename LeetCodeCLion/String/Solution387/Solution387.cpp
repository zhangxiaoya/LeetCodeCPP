
#include "Solution387.h"
#include <unordered_map>

using std::unordered_map;

int Solution387::firstUniqChar(string s)
{
    if (s.length() == 1)
        return 0;
    if (s.empty())
        return -1;
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); ++i)
    {
        if (m.find(s[i]) != m.end())
            m[s[i]]++;
        else
            m.insert({s[i], 1});
    }
    for (int i = 0; i < s.length(); ++i)
    {
        if (m[s[i]] == 1)
            return i;
    }
    return -1;
}