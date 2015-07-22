#ifndef SOLUTION237_H
#define SOLUTION237_H

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution237
{
public:
    Solution237();
    void deleteNode(ListNode* node);
};

#endif // SOLUTION237_H
