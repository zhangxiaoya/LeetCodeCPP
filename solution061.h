#ifndef SOLUTION061_H
#define SOLUTION061_H

#define NULL nullptr

//* Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution061
{
public:
    Solution061();
    ListNode* rotateRight(ListNode* head, int k);
};

#endif // SOLUTION061_H
