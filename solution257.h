#ifndef SOLUTION257_H
#define SOLUTION257_H

#define NULL nullptr

#include <vector>
#include <string>
#include <stack>

using std::string;
using std::vector;
using std::stack;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
typedef enum{L,R} tagtype;
struct stacknode{
    TreeNode* ptr;
    tagtype tag;
};

class Solution257
{
public:
    Solution257();
    vector<string> binaryTreePaths(TreeNode* root);

};

#endif // SOLUTION257_H
