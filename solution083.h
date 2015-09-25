#ifndef SOLUTION083_H
#define SOLUTION083_H

#define NULL nullptr

// * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution083
{
public:
    Solution083();
    ListNode* deleteDuplicates(ListNode* head);
};

#endif // SOLUTION083_H
