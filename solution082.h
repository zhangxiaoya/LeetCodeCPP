#ifndef SOLUTION082_H
#define SOLUTION082_H

#define NULL nullptr

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution082
{
public:
    Solution082();
    ListNode* deleteDuplicates(ListNode* head);
};

#endif // SOLUTION082_H
