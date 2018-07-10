
#ifndef LEETCODECLION_SOLUTION384_H
#define LEETCODECLION_SOLUTION384_H

#include <vector>
#include <random>

using std::vector;

class Solution384
{
private:
    vector<int> originNum;
public:
    Solution384(vector<int> nums);

    /** Resets the array to its original configuration and return it. */
    vector<int> reset();

    /** Returns a random shuffling of the array. */
    vector<int> shuffle();
};


#endif //LEETCODECLION_SOLUTION384_H
