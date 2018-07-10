
#include "Solution384.h"

Solution384::Solution384(vector<int> nums)
{
    this->originNum = nums;
}

vector<int> Solution384::reset()
{
    return this->originNum;
}

vector<int> Solution384::shuffle()
{
    vector<int> result(originNum);
    for (int i = 0;i < result.size();i++) {
        int pos = rand()%(result.size()-i);
        std::swap(result[i+pos], result[i]);
    }
    return result;
}