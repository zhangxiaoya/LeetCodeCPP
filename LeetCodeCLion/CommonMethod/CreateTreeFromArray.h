//
// Created by ynzha on 2018/3/8.
//

#ifndef LEETCODECLION_CREATETREEFROMARRAY_H
#define LEETCODECLION_CREATETREEFROMARRAY_H


#include "../CommonObjects/TreeNode.h"

class CreateTreeFromArray {
public:
    void CreateTree(TreeNode*& root, int array[], int nElem);

private:
    TreeNode* CreateSubTree(int array[], int idx, int nElem);
};


#endif //LEETCODECLION_CREATETREEFROMARRAY_H
