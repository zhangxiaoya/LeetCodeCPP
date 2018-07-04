
#include "Solution863.h"
#include <queue>
#include <unordered_set>

using std::queue;
using std::unordered_set;

vector<int> Solution863::distanceK(TreeNode *root, TreeNode *target, int K)
{
    vector<int> res;
    if (root == nullptr || target == nullptr)
        return res;
    unordered_map<TreeNode *, TreeNode *> parents;
    parents[root] = nullptr;
    dfs(root, parents);
    unordered_set<TreeNode *> visited;
    queue<TreeNode *> q;
    q.push(target);
    auto pivot = q.back();

    while (!q.empty()&& K > 0)
    {
        auto cur = q.front();
        q.pop();
        visited.insert(cur);
        if (parents[cur] != nullptr && !visited.count(parents[cur])) q.push(parents[cur]);
        if (cur->left != nullptr && !visited.count(cur->left)) q.push(cur->left);
        if (cur->right != nullptr && !visited.count(cur->right)) q.push(cur->right);
        if (cur == pivot)
        {
            K--;
            if (K == 0)
                break;
            pivot = q.back();
        }
    }
    while (!q.empty())
    {
        auto cur = q.front();
        res.push_back(cur->val);
        q.pop();
    }
    return res;
}

void Solution863::dfs(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parents)
{
    if (root->left != nullptr)
    {
        parents[root->left] = root;
        dfs(root->left, parents);
    }
    if (root->right != nullptr)
    {
        parents[root->right] = root;
        dfs(root->right, parents);
    }
}