#ifndef SOLUTION031_H
#define SOLUTION031_H
#include <vector>
using namespace std;
class Solution031
{
public:
    Solution031();
    void nextPermutation(vector<int>& nums);
private:
    void swap(int &a,int &b);
};

#endif // SOLUTION031_H
