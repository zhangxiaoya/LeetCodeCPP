#include "solution021.h"

Solution021::Solution021()
{
}

ListNode* Solution021::mergeTwoLists(ListNode *l1, ListNode *l2)
{
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;
    ListNode* h;
    ListNode* p;
    ListNode* p1 = l1;
    ListNode* p2 = l2;
    if(p1->val < p2->val)
    {
        h = p1;
        p1= p1->next;
    }
    else
    {
        h = p2;
        p2 = p2->next;
    }
    p = h;
    while(p1 != NULL && p2 != NULL)
    {
        if(p1->val < p2->val)
        {
            p->next = p1;
            p = p->next;
            p1 = p1->next;
        }
        else
        {
            p->next = p2;
            p = p->next;
            p2 = p2->next;
        }
    }
    while(p1 != NULL)
    {
        p->next = p1;
        p = p->next;
        p1 = p1->next;
    }
    while(p2 != NULL)
    {
        p->next = p2;
        p = p->next;
        p2 = p2->next;
    }
    return h;
}
