#ifndef SOLUTION021_H
#define SOLUTION021_H

#define NULL nullptr

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution021
{
public:
    Solution021();
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};

#endif // SOLUTION021_H
