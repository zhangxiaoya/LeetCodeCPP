#ifndef SOLUTION036_H
#define SOLUTION036_H

#include <vector>
using std::vector;


class Solution036
{
private:
    bool helper(vector<int>& v,int idx);
public:
    Solution036();
    bool isValidSudoku(vector<vector<char>>& board);
};

#endif // SOLUTION036_H
