#ifndef SOLUTION023_H
#define SOLUTION023_H

#define NULL nullptr
#include <vector>

using std::vector;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution023
{
private:
    ListNode* merge2List(ListNode* h1,ListNode* h2);
    ListNode* mergeKLists(vector<ListNode*>& lists,int beg,int end);
public:
    Solution023();
    ListNode* mergeKLists(vector<ListNode*>& lists);
};

#endif // SOLUTION023_H
