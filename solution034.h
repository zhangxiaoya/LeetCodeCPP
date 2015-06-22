#ifndef SOLUTION034_H
#define SOLUTION034_H
#include <vector>

using std::vector;

class Solution034
{
public:
    Solution034();
    vector<int> searchRange(vector<int>& nums, int target);
private:
    int findLower(const vector<int> &nums,int target);
    int findUpper(const vector<int> &nums,int target);
};

#endif // SOLUTION034_H
