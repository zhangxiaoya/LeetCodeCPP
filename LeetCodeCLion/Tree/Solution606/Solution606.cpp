
#include "Solution606.h"

string Solution606::tree2str(TreeNode *t)
{
    string res = "";
    if(t != nullptr)
    {
        res.append(std::to_string(t->val));
        if(t->left == nullptr && t->right == nullptr)
            return res;
        res.push_back('(');
        if(t->left)
            res.append(tree2str(t->left));
        res.push_back(')');
        if(t->right)
        {
            res.push_back('(');
            res.append(tree2str(t->right));
            res.push_back(')');
        }
    }
    return res;
}
