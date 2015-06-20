#ifndef SOLUTION138_H
#define SOLUTION138_H

#define NULL 0

// Definition for singly-linked list with a random pointer.
struct RandomListNode {
    int label;
    RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};


class Solution138
{
public:
    Solution138();
    RandomListNode *copyRandomList(RandomListNode *head);
};

#endif // SOLUTION138_H
