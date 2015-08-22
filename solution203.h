#ifndef SOLUTION203_H
#define SOLUTION203_H

#define NULL nullptr

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution203
{
public:
    Solution203();
    ListNode* removeElements(ListNode* head, int val);
};

#endif // SOLUTION203_H
