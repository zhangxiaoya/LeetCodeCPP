//
// Created by XiaoyaZhang on 2018/3/10.
//

#ifndef LEETCODECLION_SOLUTION687_H
#define LEETCODECLION_SOLUTION687_H


#include "../CommonObjects/TreeNode.h"

class Solution687
{
public:
    int longestUnivaluePath(TreeNode* root);

private:
    int Helper(TreeNode* root, int& maxResult);
};


#endif //LEETCODECLION_SOLUTION687_H
