#include "solution038.h"

Solution038::Solution038()
{

}

string Solution038::countAndSay(int n)
{
    string res = "";
    if(n <= 0)
        return res;
    res = "1";
    while(--n)
    {
        string t = "";
        for(int i = 0;i < res.size();++i)
        {
            int count = 1;
            while(i+1 < res.size() && res[i] == res[i+1])
            {
                count ++;
                i++;
            }
            t += std::to_string(count) + res[i];
        }
        res = t;
    }
    return res;
}
