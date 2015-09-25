#include "solution227.h"

Solution227::Solution227()
{

}

int Solution227::getOperOrder(string t)
{
    if(t == "-" || t == "+")
        return 2;
    else
        return 3;
}
bool Solution227::isOper(char t)
{
    if(t == '+' || t == '-' || t == '*' || t == '/')
        return true;
    return false;
}
void Solution227::trim(std::string& str)
{
    for (int i = 0, j = 0; str[i] = str[j++]; str[i] != ' ' && ++i);
}

bool Solution227::isOper(string t)
{
    if(t == "+" || t == "-" || t == "*" || t == "/")
        return true;
    return false;
}
int Solution227::toi(std::string t)
{
    if(t.empty())
        return 0;
    int res = 0;
    for(int i = 0;i<t.size();++i)
    {
        res *= 10;
        res += (t[i] - '0');
    }
    return res;
}
int Solution227::calc(int a, int b, std::string op)
{
    if(op == "-")
        return a-b;
    if(op == "+")
        return a+b;
    if(op == "*")
        return a * b;
    if(op == "/")
        return a / b;
}

int Solution227::calculate(std::string s)
{
    if(s.empty())
        return 0;
    stack<string> ss;
    trim(s);
    vector<string> postfix;
    string item;
    string oper;
    int i = 0,j = 0;
    while(j<s.size())
    {
        while(s[j] != '\0' && !isOper(s[j]))
            j++;
        item = s.substr(i,j-i);

        postfix.push_back(item);

        if(s[j] != '\0')
        {
            oper = s.substr(j,1);
            while(!ss.empty() && getOperOrder(ss.top()) > getOperOrder(oper))
            {
                postfix.push_back(ss.top());
                ss.pop();
            }
            ss.push(oper);
        }
        else
            break;
        i = ++j;
    }
    while(!ss.empty())
    {
        postfix.push_back(ss.top());
        ss.pop();
    }
    stack<int> num;
    i = 0;
    while(i < postfix.size())
    {
        item = postfix[i];
        if(isOper(item))
        {
            int b = num.top();
            num.pop();
            int a = num.top();
            num.pop();
            num.push(calc(a,b,item));
        }
        else
            num.push(toi(item));
        i++;
    }
    return num.top();
}
