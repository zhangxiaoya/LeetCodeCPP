
#include "Solution662.h"
#include <queue>
#include <limits>
#include <vector>
#include <unordered_map>

using std::queue;
using std::vector;
using std::unordered_map;

int Solution662::widthOfBinaryTree(TreeNode *root)
{
    int res = 0;
    if (root == nullptr)
        return res;
    queue<TreeNode *> q;
    q.push(root);
    TreeNode *pivot = q.back();
    TreeNode *p;
    TreeNode *left = root;
    unordered_map<TreeNode *, int> order;
    order.insert({root, 0});
    int maxL = std::numeric_limits<int>::min();
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        if (p->left)
        {
            q.push(p->left);
            order.insert({p->left, order[p] * 2 + 1});
        }
        if (p->right)
        {
            q.push(p->right);
            order.insert({p->right, order[p] * 2 + 2});
        }
        if (p == pivot)
        {
            pivot = q.back();
            maxL = std::max(order[p] - order[left] + 1, maxL);
            left = q.front();
        }
    }
    return maxL;
}