#include "solution036.h"

Solution036::Solution036()
{

}
bool Solution036::helper(vector<int>& v,int idx)
{
    if(v[idx] == 1)
        return false;
    v[idx] = 1;
    return true;
}

bool Solution036::isValidSudoku(vector<vector<char> > &board)
{
    /*
    vector<int> vr(10,0);
    vector<int> vc(10,0);
    vector<int> vm(10,0);

    for(int i =0;i<9;++i)
    {
        for(int k=0;k<10;++k)
            vr[k] = vc[k] = vm[k] = 0;
        for(int j=0;j<9;++j)
        {
            if(board[i][j] != '.')
            {
                if(!helper(vr,board[i][j] - '0')||
                        !helper(vc,board[i][j]-'0')||
                        !helper(vm,board[3*(i/3) + j/3][3*(i%3)+j%3] - '0'))
                    return false;
            }
        }
    }
    return true;
    */
    vector<int> vr(10,0);
    vector<vector<int> > vc(9,vector<int>(10,0));
    vector<vector<int> > vm(9,vector<int>(10,0));

    for(int i=0;i<9;++i)
    {
        for(int k=0;k<10;++k)
            vr[k] = 0;
        for(int j=0;j<9;++j)
        {
            if(board[i][j] != '.')
            {
                if(!helper(vr,board[i][j] - '0')||
                    !helper(vc[j],board[i][j] - '0') ||
                        !helper(vm[i/3*3+j/3],board[i][j] - '0'))
                    return false;
            }
        }
    }
    return true;
}
