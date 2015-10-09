#ifndef SOLUTION037_H
#define SOLUTION037_H

#include <vector>

using std::vector;

class Solution037
{
public:
    Solution037();
    void solveSudoku(vector<vector<char>>& board);
protected:
    void clear(int r,int c,int val);
    void fill(int r,int c,int val);
    bool isvalid(int r,int c,int val);
    bool helper(vector<vector<char> >& board,int index);

private:
    int vr[9][10];
    int vc[9][10];
    int vm[9][10];

};

#endif // SOLUTION037_H
