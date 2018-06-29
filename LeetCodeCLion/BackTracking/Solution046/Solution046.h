
#ifndef LEETCODECLION_SOLUTION046_H
#define LEETCODECLION_SOLUTION046_H

#include <vector>
using  std::vector;

class Solution046
{
    void swap(int&a, int&b);
    void help(vector<int> nums, int idx, vector<vector<int>>& res);
public:
    vector<vector<int>> permute(vector<int>& nums);
};


#endif //LEETCODECLION_SOLUTION046_H
