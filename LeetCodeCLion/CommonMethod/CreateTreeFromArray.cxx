//
// Created by ynzha on 2018/3/8.
//

#include "CreateTreeFromArray.h"

void CreateTreeFromArray::CreateTree(TreeNode*& root, int *array, int nElem)
{
    if(array == NULL || nElem <= 0)
    {
        return;
    }
    root = CreateSubTree(array, 0, nElem);
}

TreeNode *CreateTreeFromArray::CreateSubTree(int *array, int idx, int nElem)
{
    if(idx <nElem && array[idx] != -1)
    {
        TreeNode* node = new  TreeNode(array[idx]);
        node->left = CreateSubTree(array, 2 * idx + 1, nElem);
        node->right = CreateSubTree(array, 2 * idx + 2, nElem);
        return node;
    }
    else
        return NULL;
}
