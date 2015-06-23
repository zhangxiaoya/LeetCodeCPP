#include "solution059.h"

Solution059::Solution059()
{

}

vector<vector<int>> Solution059::generateMatrix(int n)
{
    if(n < 1)
        return {};
    vector<vector<int>> res(n,vector<int>(n,0));
    int begCol = 0;
    int endCol = n-1;
    int begRow = 0;
    int endRow = n-1;
    int val = 1;
    while(1)
    {
        for(int i = begCol;i<=endCol;++i)
            res[begRow][i] = val++;
        if(++begRow > endRow)
            break;
        for(int i = begRow;i<= endRow;++i)
            res[i][endCol] = val++;
        if(--endCol < begCol)
            break;
        for(int i= endCol;i>= begCol;--i)
            res[endRow][i] = val++;
        if(--endRow < begRow)
            break;
        for(int i =endRow;i>= begRow;--i)
            res[i][begCol] = val++;
        if(++begCol > endCol)
            break;
    }
    return res;
}
