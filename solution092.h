#ifndef SOLUTION092_H
#define SOLUTION092_H

#define NULL nullptr


//* Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution092
{
public:
    Solution092();
    ListNode* reverseBetween(ListNode* head, int m, int n);
};

#endif // SOLUTION092_H
