#ifndef SOLUTION328_H
#define SOLUTION328_H
#define NULL 0

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution328
{
public:
    Solution328();
    ListNode* oddEvenList(ListNode* head);
};

#endif // SOLUTION328_H
