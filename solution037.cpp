#include "solution037.h"

Solution037::Solution037()
{

}

void Solution037::solveSudoku(vector<vector<char> > &board)
{
    for(int i = 0;i<9;++i)
        for(int j=0;j<9;++j)
            if(board[i][j] != '.')
                fill(i,j,board[i][j] - '0');
    helper(board,0);
}

bool Solution037::helper(vector<vector<char> > &board, int index)
{
    if(index > 80)
        return true;
    int r = index /9;
    int c = index - 9*r;
    if(board[r][c] != '.')
        return helper(board,index +1);
    for(int val = '1';val <= '9';++val)
    {
        if(isvalid(r,c,val-'0'))
        {
            board[r][c] = val;
            fill(r,c,val-'0');
            if(helper(board,index+1))
                return true;
            clear(r,c,val-'0');
        }
    }
    board[r][c] = '.';
    return false;
}

bool Solution037::isvalid(int r, int c, int val)
{
    if(vr[r][val] == 0 &&
            vc[c][val] == 0 &&
            vm[r/3*3 + c/3][val] == 0)
        return true;
    else
        return false;
}

void Solution037::fill(int r, int c, int val)
{
    vr[r][val] = 1  ;
    vc[c][val] = 1;
    vm[r/3*3+c/3][val] = 1;
}

void Solution037::clear(int r, int c, int val)
{
    vr[r][val] = 0;
    vc[c][val] = 0;
    vm[r/3*3+c/3][val] = 0;
}
