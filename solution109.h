#ifndef SOLUTION109_H
#define SOLUTION109_H

#define NULL nullptr


//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution109
{
private:
    TreeNode* help(ListNode* head,ListNode* tail);
public:
    Solution109();
    TreeNode* sortedListToBST(ListNode* head);
};

#endif // SOLUTION109_H
