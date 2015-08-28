#include "solution165.h"

Solution165::Solution165()
{

}

int Solution165::compareVersion(std::string version1, std::string version2)
{
    int level1,level2;
    level1 = level2 =0;
    string ::iterator it1 = version1.begin();
    string ::iterator it2 = version2.begin();
    while(it1 != version1.end() || it2 != version2.end())
    {
        while(it1 != version1.end())
        {
            if((*it1) == '.')
            {
                it1 ++;
                break;
            }
            level1 *= 10;
            level1 += (*it1++ - '0');
        }
        while(it2 != version2.end())
        {
            if((*it2) == '.')
            {
                it2++;
                break;
            }
            level2 *= 10;
            level2 += (*it2++ - '0');
        }
        if(level1 > level2)
            return 1;
        else if(level2 > level1 )
            return -1;
        else
            level1 = level2 = 0;
    }
    return 0;
}
