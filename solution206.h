#ifndef SOLUTION206_H
#define SOLUTION206_H

#define NULL nullptr
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution206
{
public:
    Solution206();
    ListNode* reverseList(ListNode* head);
};

#endif // SOLUTION206_H
