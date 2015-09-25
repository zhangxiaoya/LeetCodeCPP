#ifndef SOLUTION148_H
#define SOLUTION148_H

#define NULL nullptr

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution148
{
    ListNode* merge(ListNode* h1,ListNode* h2);
public:
    Solution148();
    ListNode* sortList(ListNode* head);
};

#endif // SOLUTION148_H
