#include "solution109.h"

Solution109::Solution109()
{
}

TreeNode* Solution109::sortedListToBST(ListNode *head)
{
    return help(head,NULL);
}

TreeNode* Solution109::help(ListNode *head, ListNode *tail)
{
    if(head == tail)
        return NULL;
    if(head->next == tail)
    {
        TreeNode* p = new TreeNode(head->val);
        return p;
    }
    ListNode* mid = head;
    ListNode* t = head;
    while(t != tail && t->next != tail)
    {
        mid = mid->next;
        t = t->next->next;
    }
    TreeNode* p = new TreeNode(mid->val);
    p->left = help(head,mid);
    p->right = help(mid->next,tail);
    return p;
}
