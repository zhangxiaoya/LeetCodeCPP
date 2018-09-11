
#include "Solution894.h"

vector<TreeNode *> Solution894::allPossibleFBT(int N)
{
    vector<TreeNode*> res;
    if(N % 2 == 0 || N < 1)
        return res;

    if(N == 1)
    {
        TreeNode* root = new TreeNode(0);
        res.push_back(root);
        return res;
    }
    else
    {
        for(int i = 1; i< N;i += 2)
        {
            vector<TreeNode*> left = allPossibleFBT(i);
            vector<TreeNode*> right = allPossibleFBT(N - i -1);
            for(int j = 0; j< left.size(); ++j)
            {
                for(int k = 0; k < right.size(); ++ k)
                {
                    TreeNode* root = new TreeNode(0);
                    root->left = left[j];
                    root->right = right[k];
                    res.push_back(root);
                }
            }
        }
        return res;
    }
}