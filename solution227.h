#ifndef SOLUTION227_H
#define SOLUTION227_H

#include <string>
#include <vector>
#include <stack>

using std::string;
using std::stack;
using std::vector;

class Solution227
{
private:
    void trim(string& str);
    int getOperOrder(string t);
    bool isOper(char t);
    bool isOper(string t);
    int toi(string t);
    int calc(int a,int b,string op);
public:
    Solution227();
    int calculate(string s);
};

#endif // SOLUTION227_H
