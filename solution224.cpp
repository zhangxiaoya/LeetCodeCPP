#include "solution224.h"

using std::stack;

Solution224::Solution224()
{
}

int Solution224::calculate(string s)
{
    stack<int> sn;
    stack<char> sa;
    string val = "";
    for(int i = s.size() -1;i >= 0;--i)
    {
        if(s[i] == ')' || s[i] == '+' || s[i] == '-')
            sa.push(s[i]);
        else if(s[i] <= '9' && s[i] >= '0')
        {
            val = s[i] + val;
            if(i == 0 || s[i-1] > '9' || s[i-1] < '0')
            {
                sn.push(stoi(val));
                val = "";
            }
        }
        else if(s[i] == '(')
        {
            while(sa.top() != ')')
            {
                int nl = sn.top();
                sn.pop();
                int nr = sn.top();
                sn.pop();
                char op = sa.top();
                sa.pop();
                if(op == '+')
                    sn.push(nl + nr);
                else if(op == '-')
                    sn.push(nl - nr);
            }
            sa.pop();
        }
    }
    while(!sa.empty())
    {
        int nl = sn.top();
        sn.pop();
        int nr = sn.top();
        sn.pop();
        char op = sa.top();
        sa.pop();
        if(op == '+')
            sn.push(nl + nr);
        else if(op == '-')
            sn.push(nl - nr);
    }
    return sn.top();
}
