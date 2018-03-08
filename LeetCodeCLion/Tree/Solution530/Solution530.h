//
// Created by ynzha on 2018/3/8.
//

#ifndef LEETCODECLION_SOLUTION530_H
#define LEETCODECLION_SOLUTION530_H


#include <climits>
#include "../../CommonObjects/TreeNode.h"

class Solution530 {
public:
    int getMinimumDifference(TreeNode* root);

private:
    int result = INT_MAX;
    int pre = -1;
};


#endif //LEETCODECLION_SOLUTION530_H
