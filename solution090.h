#ifndef SOLUTION090_H
#define SOLUTION090_H
#include <vector>

using namespace std;

class Solution090
{
public:
    Solution090();
    vector<vector<int>> subsetsWithDup(vector<int>& nums);
    void subsets(const vector<int> &S,vector<int> path,vector<int>::iterator beg,vector<vector<int>> &result);
};

#endif // SOLUTION090_H
