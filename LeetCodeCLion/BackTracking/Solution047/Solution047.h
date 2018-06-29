
#ifndef LEETCODECLION_SOLUTION047_H
#define LEETCODECLION_SOLUTION047_H

#include <vector>
using std::vector;

class Solution047
{
    void swap(int&a, int &b);
    void help(vector<int> nums, int idx, vector<vector<int>>& res);
public:
    vector<vector<int>> permuteUnique(vector<int>& nums);
};


#endif //LEETCODECLION_SOLUTION047_H
