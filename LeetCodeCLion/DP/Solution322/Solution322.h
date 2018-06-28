//
// Created by runisys on 18-6-28.
//

#ifndef LEETCODECLION_SOLUTION322_H
#define LEETCODECLION_SOLUTION322_H

#include <vector>
using std::vector;

class Solution322
{
public:
    int coinChange(vector<int>& coins, int amount);

    void help(vector<int> &coins, int amount, int coinIdx, int oldCount, vector<int>& ress);
};


#endif //LEETCODECLION_SOLUTION322_H
