#include "solution054.h"

Solution054::Solution054()
{

}
vector<int> Solution054::spiralOrder(vector<vector<int> > &matrix)
{
    vector<int> res;
    if(matrix.size() < 1)
        return res;
    int begRow = 0;
    int begCol = 0;
    int endCol = matrix[0].size() - 1;
    int endRow = matrix.size() - 1;
    while(1)
    {
        for(int i=begCol;i<=endCol;++i)
            res.push_back(matrix[begRow][i]);
        if(++begRow > endRow)
            break;
        for(int i =begRow;i<=endRow;++i)
            res.push_back(matrix[i][endCol]);
        if(--endCol < begCol)
            break;
        for(int i= endCol;i>= begCol;--i)
            res.push_back(matrix[endRow][i]);
        if(--endRow < begRow)
            break;
        for(int i = endRow;i>=begRow;--i)
            res.push_back(matrix[i][begCol]);
        if(++begCol > endCol)
            break;
    }
    return res;
}
