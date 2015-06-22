#ifndef SOLUTION078_H
#define SOLUTION078_H

#include <vector>
using namespace std;

class Solution078
{
public:
    Solution078();
    vector<vector<int>> subsets(vector<int>& nums);
    void subsets(const vector<int> &S,vector<int> &path,int step,vector<vector<int>> &result);
};

#endif // SOLUTION078_H
