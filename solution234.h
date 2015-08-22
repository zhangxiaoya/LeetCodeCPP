#ifndef SOLUTION234_H
#define SOLUTION234_H

#define NULL nullptr

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution234
{
public:
    Solution234();
    bool isPalindrome(ListNode* head);
};

#endif // SOLUTION234_H
