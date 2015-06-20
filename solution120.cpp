#include "solution120.h"
#define INT_MAX 0x7f000000
Solution120::Solution120()
{
}
int Solution120::minimumTotal(vector<vector<int> > &triangle)
{
    for(int i =triangle.size()-2;i>=0;--i)
        for(int j =0;j<i+1;++j)
            triangle[i][j] += min(triangle[i+1][j+1],triangle[i+1][j]);
    return triangle[0][0];
}
