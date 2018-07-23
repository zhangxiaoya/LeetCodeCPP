
#include "Solution872.h"
#include <vector>
using namespace std;

static void preorder(TreeNode* root,vector<int>& sq )
{
    if(root->left == nullptr && root->right == nullptr)
    {
        sq.push_back(root->val);
        return;
    }
    if(root->left)
        preorder(root->left,sq);
    if(root->right)
        preorder(root->right,sq);
}
bool Solution872::leafSimilar(TreeNode *root1, TreeNode *root2)
{
    if(root1 == nullptr && root2 == nullptr)
        return true;
    if(root1 == nullptr || root2 == nullptr)
        return false;
    vector<int> sq1;
    vector<int> sq2;
    preorder(root1, sq1);
    preorder(root2, sq2);
    if(sq1.size() != sq2.size())
        return false;
    for(int i =0; i< sq1.size();++i)
    {
        if(sq1[i] != sq2[i])
            return false;
    }
    return true;
}