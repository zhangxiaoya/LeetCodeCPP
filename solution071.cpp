#include "solution071.h"

Solution071::Solution071()
{
}
string Solution071::simplifyPath(string path)
{
    string res = "";
    if(path.empty())
        return res;

    stack<string> s;
    string d;

    path = path.substr(1);
    string right = path;
    int pos = path.find_first_of("/");
    while(pos != string::npos)
    {
        d = right.substr(0,pos);
        right = right.substr(pos+1);

        if(d == "..")
        {
            if(!s.empty())
               s.pop();
        }
        else if(d == ".")
        {
            if(s.empty())
                s.push(d);
        }
        else
            s.push(d);
        pos = right.find_first_of("/");
    }
    if(!right.empty() && right != ".")
        s.push(right);
    while(!s.empty())
    {
        d = s.top();
        s.pop();
        res = d + res;
    }
    res = "/" + res;
    return res;
}
