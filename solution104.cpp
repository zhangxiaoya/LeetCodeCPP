#include "solution104.h"

Solution104::Solution104()
{
}
int max(int a,int b)
{
    return a>b?a:b;
}

int Solution104::maxDepth(TreeNode *root)
{
    if(root == NULL)
        return 0;
    return max(maxDepth(root->left),maxDepth(root->right)) +1;
}
