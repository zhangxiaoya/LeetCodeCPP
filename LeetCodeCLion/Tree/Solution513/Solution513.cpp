
#include "Solution513.h"
#include <queue>
using std::queue;

int Solution513::findBottomLeftValue(TreeNode *root)
{
    queue<TreeNode*> q;
    q.push(root);

    TreeNode* pivot =q.back();
    TreeNode* leftBottom = q.front();
    while(q.empty() == false)
    {
        TreeNode* p = q.front();
        q.pop();

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        if(p == pivot)
        {
            pivot = q.back();
            if(q.empty() == false)
                leftBottom = q.front();
        }
    }
    return leftBottom->val;
}
