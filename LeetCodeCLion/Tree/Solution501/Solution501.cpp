
#include "Solution501.h"


int Solution501::Inorder(TreeNode *root, unordered_map<int, int> &counter)
{
    int maxCount = 0;
    if(root == nullptr)
        return maxCount;
    maxCount = std::max(Inorder(root->left, counter),Inorder(root->right, counter));
    if(counter.count(root->val))
    {
        counter[root->val]++;
    }
    else
        counter.insert({root->val, 1});
    if (maxCount < counter[root->val])
        maxCount = counter[root->val];
    return maxCount;
}

vector<int> Solution501::findMode(TreeNode *root)
{
    unordered_map<int,int> counter;
    vector<int> res;
    int maxCount = Inorder(root, counter);
    for(auto a: counter)
        if(a.second == maxCount)
            res.push_back(a.first);
    return res;
}