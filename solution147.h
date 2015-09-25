#ifndef SOLUTION147_H
#define SOLUTION147_H

#define NULL nullptr

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution147
{
public:
    Solution147();
    ListNode* insertionSortList(ListNode* head);
};

#endif // SOLUTION147_H
