#ifndef SOLUTION025_H
#define SOLUTION025_H

#define NULL nullptr

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution025
{
public:
    Solution025();
    ListNode* reverseKGroup(ListNode* head, int k);
};

#endif // SOLUTION025_H
