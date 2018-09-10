
#include "Solution095.h"

vector<TreeNode *> Solution095::generateTrees(int n)
{
    if(n == 0)
        return vector<TreeNode*>();
    return helper(1, n);
}

vector<TreeNode *> Solution095::helper(int head, int end)
{
    vector<TreeNode *> res;
    if (end - head < 0)
    {
        res.push_back(nullptr);
    }
    if (end - head == 0)
    {
        res.push_back(new TreeNode(end));
    }
    if (end - head > 0)
    {
        for (int i = head; i <= end; ++i)
        {
            vector<TreeNode *> left = helper(head, i - 1);
            vector<TreeNode *> right = helper(i + 1, end);
            for (int j = 0; j < left.size(); ++j)
            {
                for (int k = 0; k < right.size(); ++k)
                {
                    TreeNode *root = new TreeNode(i);
                    root->left = left[j];
                    root->right = right[k];
                    res.push_back(root);
                }
            }
        }
    }
    return res;
}