#include "solution150.h"

Solution150::Solution150()
{
}

int Solution150::evalRPN(vector<string> &tokens)
{
    if(tokens.empty())
        return 0;
    stack<int> s;
    for(auto item:tokens)
    {
        if(item.size() > 1 || isdigit(item[0]))
            s.push(stoi(item));
        else
        {
            auto b = s.top();
            s.pop();
            auto a=  s.top();
            s.pop();
            switch (item[0]) {
            case '+':
                a += b;
                break;
            case '-':
                a -= b;
                break;
            case '*':
                a *= b;
                break;
            case '/':
                a /= b;
                break;
            }
            s.push(a);
        }
    }
    return s.top();
}
