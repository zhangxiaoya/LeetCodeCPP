
#include "Solution113.h"

void Solution113::findPath(TreeNode *root, vector<int> &path, vector<vector<int> > &paths, int sum)
{
    if (root == nullptr)
        return;
    path.push_back(root->val);
    if (root->left == nullptr && root->right == nullptr && sum == root->val)
        paths.push_back(path);
    findPath(root->left, path, paths, sum - root->val);
    findPath(root->right, path, paths, sum - root->val);
    path.pop_back();
}

vector<vector<int> > Solution113::pathSum(TreeNode *root, int sum)
{
    vector<vector<int>> res;
    vector<int> path;
    findPath(root, path, res, sum);
    return res;
}