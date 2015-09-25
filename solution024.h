#ifndef SOLUTION024_H
#define SOLUTION024_H

#define NULL nullptr


//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution024
{
public:
    Solution024();
    ListNode* swapPairs(ListNode* head);
};

#endif // SOLUTION024_H
