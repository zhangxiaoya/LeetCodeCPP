#ifndef SOLUTION019_H
#define SOLUTION019_H

#define NULL nullptr


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution019
{
public:
    Solution019();
    ListNode* removeNthFromEnd(ListNode* head, int n);
};

#endif // SOLUTION019_H
