//
// Created by ynzha on 2018/3/8.
//

#include "CreateTreeFromArray.h"

void CreateTreeFromArray::CreateTree(TreeNode*& root, vector<int> array)
{
    if(array.size() == 0)
    {
        return;
    }
    root = CreateSubTree(array, 0);
}

TreeNode *CreateTreeFromArray::CreateSubTree(vector<int> array, int idx)
{
    if(idx < array.size() && array[idx] != -1)
    {
        TreeNode* node = new  TreeNode(array[idx]);
        node->left = CreateSubTree(array, 2 * idx + 1);
        node->right = CreateSubTree(array, 2 * idx + 2);
        return node;
    }
    else
        return NULL;
}
