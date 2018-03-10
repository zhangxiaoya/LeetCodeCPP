//
// Created by XiaoyaZhang on 2018/3/11.
//

#ifndef LEETCODECLION_SOLUTION437_H
#define LEETCODECLION_SOLUTION437_H


#include "../CommonObjects/TreeNode.h"

class Solution437
{
public:
    int pathSum(TreeNode* root, int sum);

private:
    int findPath(TreeNode* root, int sum);
};


#endif //LEETCODECLION_SOLUTION437_H
