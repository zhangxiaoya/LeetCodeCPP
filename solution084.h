#ifndef SOLUTION084_H
#define SOLUTION084_H
#include "global.h"

#include <vector>
#include <stack>
using std::vector;
using std::stack;

class Solution084
{
public:
    Solution084();
    int largestRectangleArea(vector<int>& height);
    int max(int a,int b)
    {
        return a>b?a:b;
    }
};

#endif // SOLUTION084_H
