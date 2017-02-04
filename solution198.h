#ifndef SOLUTION198_H
#define SOLUTION198_H

#include <vector>

using namespace std;

class Solution198
{
public:
    int* result;
private:
    int help(int index,vector<int>& nums);
public:
    Solution198();
    int rob(vector<int>& nums);
};

#endif // SOLUTION198_H
