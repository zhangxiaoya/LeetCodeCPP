//
// Created by ynzha on 2018/3/8.
//

#ifndef LEETCODECLION_TREENODE_H
#define LEETCODECLION_TREENODE_H


#include <cstdlib>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


#endif //LEETCODECLION_TREENODE_H
