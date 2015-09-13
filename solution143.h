#ifndef SOLUTION143_H
#define SOLUTION143_H

#define NULL nullptr

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution143
{
public:
    Solution143();
    void reorderList(ListNode* head);
};

#endif // SOLUTION143_H
