#ifndef SOLUTION141_H
#define SOLUTION141_H

#define NULL nullptr

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution141
{
public:
    Solution141();
    bool hasCycle(ListNode *head);
};

#endif // SOLUTION141_H
