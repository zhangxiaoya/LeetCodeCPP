
#include "Solution889.h"

TreeNode *Solution889::constructFromPrePost(vector<int> &pre, vector<int> &post)
{
    TreeNode *root = nullptr;
    unsigned long len = pre.size();
    if (len == 0)
        return root;
    root = new TreeNode(pre[0]);
    if (len == 1)
        return root;
    int leftChild = pre[1];
    // Only One Child
    if (leftChild == post[len - 2])
    {
        vector<int> leftPre = vector<int>(pre.begin() + 1, pre.end());
        vector<int> leftPost = vector<int>(post.begin(), post.begin() + len - 1);
        root->left = constructFromPrePost(leftPre, leftPost);
    }
    else // Two Children
    {
        auto leftChildPosInPost = len - 2;
        for (; leftChildPosInPost >= 0; --leftChildPosInPost)
        {
            if (post[leftChildPosInPost] == pre[1])
                break;
        }
        vector<int> leftPre = vector<int>(pre.begin() + 1, pre.begin() + 1 + (leftChildPosInPost + 1));
        vector<int> leftPost = vector<int>(post.begin(), post.begin() + (leftChildPosInPost + 1));

        vector<int> rightPre = vector<int>(pre.begin() + 1 + (leftChildPosInPost + 1), pre.end());
        vector<int> rightPost = vector<int>(post.begin() + (leftChildPosInPost + 1), post.end() - 1);

        root->left = constructFromPrePost(leftPre, leftPost);
        root->right = constructFromPrePost(rightPre, rightPost);
    }
    return root;
}