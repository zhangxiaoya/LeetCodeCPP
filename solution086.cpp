#include "solution086.h"

Solution086::Solution086()
{
}

ListNode* Solution086::partition(ListNode *head, int x)
{
    if(head == NULL)
        return NULL;
    ListNode* th = new ListNode(0);
    th->next = head;
    ListNode* p =th;
    ListNode* q;
    ListNode* t;
    while(p->next != NULL && p->next->val < x)
        p = p->next;
    q = p;
    while(q->next != NULL)
    {
        if(q->next->val < x)
        {
            t = q->next;
            q->next = t->next;
            t->next = p->next;
            p->next = t;
            p = p->next;
        }
        else
            q = q->next;
    }
    return th->next;
}
