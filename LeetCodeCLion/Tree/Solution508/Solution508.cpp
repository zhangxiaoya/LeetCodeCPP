
#include "Solution508.h"


vector<int> Solution508::findFrequentTreeSum(TreeNode *root)
{
    vector<int> res;
    unordered_map<int, int> counter;
    int maxCount = 0;
    postOrder(root, counter, maxCount);
    for(auto c : counter)
    {
        if(c.second == maxCount)
            res.push_back(c.first);
    }
    return res;
}

void Solution508::postOrder(TreeNode *root, unordered_map<int, int> &counter, int &maxCount)
{
    if (root == nullptr)
        return;

    if (root->left)
    {
        postOrder(root->left, counter, maxCount);
        root->val += root->left->val;
    }
    if (root->right)
    {
        postOrder(root->right, counter, maxCount);
        root->val += root->right->val;
    }

    int count = counter.count(root->val);
    if (count == 0)
    {
        counter.insert({root->val, 1});
        count = 1;
    } else
        count = ++ counter[root->val];
    maxCount = std::max(maxCount, count);
}
