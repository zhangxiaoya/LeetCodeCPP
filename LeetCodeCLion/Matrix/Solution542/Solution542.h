
#ifndef LEETCODECLION_SOLUTION542_H
#define LEETCODECLION_SOLUTION542_H

#include <vector>
using std::vector;

class Solution542
{
    struct point
    {
    public:
        point(int _x, int _y):x(_x),y(_y){}
        int x;
        int y;
    };
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix);
};


#endif //LEETCODECLION_SOLUTION542_H
