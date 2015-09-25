#include "solution058.h"

Solution058::Solution058()
{
}

int Solution058::lengthOfLastWord(string s)
{
    if(s.empty())
        return 0;
    int pos = s.find_last_of(' ');
    if(pos == string::npos)
        return s.length();
    while(pos == s.length()-1)
    {
        s = s.substr(0,pos);
        pos = s.find_last_of(' ');
    }
    if(pos == string::npos)
        return 0;
    return s.length() - s.find_last_of(' ') - 1;
}
