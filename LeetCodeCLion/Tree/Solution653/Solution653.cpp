//
// Created by XiaoyaZhang on 2018/3/11.
//

#include "Solution653.h"

bool Solution653::findTarget(TreeNode *root, int k) {
    if(root==NULL)
        return false;
    unordered_map<int, int> hash;
    return DFS(root, hash, k);
}

bool Solution653::DFS(TreeNode *root, unordered_map<int, int> &hash, int k)
{
    if(root == NULL)
        return false;
    if(hash[k - root->val])
        return true;
    hash[root->val] = 1;
    return DFS(root->left, hash,k) || DFS(root->right, hash, k);
}
