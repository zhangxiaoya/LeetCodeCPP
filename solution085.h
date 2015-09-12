#ifndef SOLUTION085_H
#define SOLUTION085_H

#include <vector>
#include <algorithm>

using std::vector;

class Solution085
{
public:
    Solution085();
    int maximalRectangle(vector<vector<char> >& matrix);
    int min(int a,int b){return a<b?a:b;}
    int max(int a,int b){return a>b?a:b;}
};

#endif // SOLUTION085_H
