#ifndef SOLUTION041_H
#define SOLUTION041_H

#include <vector>
using std::vector;

class Solution041
{
private:
    void swap(int &a,int &b);
public:
    Solution041();
    int firstMissingPositive(vector<int>& nums);
};

#endif // SOLUTION041_H
