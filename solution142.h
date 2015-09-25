#ifndef SOLUTION142_H
#define SOLUTION142_H

#define NULL nullptr
#include <map>

using std::map;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution142
{
public:
    Solution142();
    ListNode *detectCycle(ListNode *head);
};

#endif // SOLUTION142_H
