#include "solution067.h"

Solution067::Solution067()
{
}

string Solution067::addBinary(string a, string b)
{
    if(a.empty())
        return b;
    if(b.empty())
        return a;
    int p = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;
    string res = "";
    while(i >= 0 && j >=0)
    {
        if(a[i] == '1' && b[j] == '1')
        {
            if(p == 1)
                res.append("1");
            else
                res.append("0");
            p = 1;
        }
        else if(a[i] == '1' || b[j] == '1')
        {
            if(p == 1)
            {
                res.append("0");
                p = 1;
            }
            else
            {
                res.append("1");
                p = 0;
            }
        }
        else
        {
            if(p == 1)
                res.append("1");
            else
                res.append("0");
            p = 0;
        }
        i--;
        j--;
    }
    while(i >=0)
    {
        if(a[i] == '1')
        {
            if(p == 1)
            {
                res.append("0");
                p = 1;
            }
            else
            {
                res.append("1");
                p = 0;
            }
        }
        else
        {
            if(p == 1)
                res.append("1");
            else
                res.append("0");
            p = 0;
        }
        i--;
    }
    while(j>= 0)
    {
        if(b[j] == '1')
        {
            if(p == 1)
            {
                res.append("0");
                p = 1;
            }
            else
            {
                res.append("1");
                p = 0;
            }
        }
        else
        {
            if(p == 1)
                res.append("1");
            else
                res.append("0");
            p = 0;
        }
        j--;
    }
    if(p == 1)
        res.append("1");
    std::reverse(res.begin(),res.end());
    return res;
}
