
#ifndef LEETCODECLION_SOLUTION303_H
#define LEETCODECLION_SOLUTION303_H

#include <vector>
using std::vector;

class NumArray
{
private:
    vector<int> acc;
public:
    NumArray(vector<int> nums);

    int sumRange(int i, int j);
};


#endif //LEETCODECLION_SOLUTION303_H
