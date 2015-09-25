#ifndef SOLUTION086_H
#define SOLUTION086_H

#define NULL nullptr

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution086
{
public:
    Solution086();
    ListNode* partition(ListNode* head, int x);
};

#endif // SOLUTION086_H
