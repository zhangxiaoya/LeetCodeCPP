#include "solution073.h"

Solution073::Solution073()
{

}

void Solution073::setZeroes(vector<vector<int> > &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    vector<bool> rowFlag(row,false);
    vector<bool> colFlag(col,false);

    for(int i=0;i<row;++i)
    {
        for(int j = 0;j<col;++j)
        {
            if(matrix[i][j] == 0)
                rowFlag[i] = colFlag[j] = true;
        }
    }
    for(int i =0;i<row;++i)
    {
        if(rowFlag[i])
            for(int j=0;j<col;++j)
                matrix[i][j] = 0;
    }
    for(int j=0;j<col;++j)
    {
        if(colFlag[j])
            for(int i = 0;i<row;++i)
                matrix[i][j] = 0;
    }
}
