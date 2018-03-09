//
// Created by ynzha on 2018/3/8.
//

#ifndef LEETCODECLION_CREATETREEFROMARRAY_H
#define LEETCODECLION_CREATETREEFROMARRAY_H


#include "../CommonObjects/TreeNode.h"
#include <vector>
using std::vector;

class CreateTreeFromArray {
public:
    void CreateTree(TreeNode*& root, vector<int> array);

private:
    TreeNode* CreateSubTree(vector<int> array, int idx);
};


#endif //LEETCODECLION_CREATETREEFROMARRAY_H
