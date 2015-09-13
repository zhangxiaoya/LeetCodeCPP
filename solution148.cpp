#include "solution148.h"

Solution148::Solution148()
{
}

ListNode* Solution148::sortList(ListNode *head)
{
    if(head == NULL)
        return NULL;
    if(head->next == NULL)
        return head;
    ListNode* fast = head->next;
    ListNode* slow = head;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    fast = slow->next;
    slow->next = NULL;
    slow = fast;
    ListNode* l = sortList(head);
    ListNode* r = sortList(slow);
    return merge(l,r);
}

ListNode* Solution148::merge(ListNode *h1, ListNode *h2)
{
    if(h1 == NULL)
        return h2;
    if(h2 == NULL)
        return h1;
    ListNode* h;
    ListNode* p1 = h1;
    ListNode* p2 = h2;
    if(p1->val < p2->val)
    {
        h = p1;
        p1 = p1->next;
    }
    else
    {
        h = p2;
        p2 = p2->next;
    }
    ListNode* p = h;
    while(p1 != NULL && p2 != NULL)
    {
        if(p1->val < p2->val)
        {
            p->next = p1;
            p1 = p1->next;
        }
        else
        {
            p->next = p2;
            p2 = p2->next;
        }
        p = p->next;
    }
    if(p1 != NULL)
        p->next = p1;
    else
        p->next = p2;
    return h;
}
