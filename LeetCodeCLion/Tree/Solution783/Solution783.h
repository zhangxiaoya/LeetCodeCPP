//
// Created by ynzha on 2018/3/8.
//

#ifndef LEETCODECLION_SOLUTION783_H
#define LEETCODECLION_SOLUTION783_H


#include <climits>
#include "../../CommonObjects/TreeNode.h"

class Solution783 {
public:
    int minDiffInBST(TreeNode* root);

private:
    int result = INT_MAX;
    int pre = -1;
};


#endif //LEETCODECLION_SOLUTION783_H
