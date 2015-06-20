#include "solution138.h"

Solution138::Solution138()
{
}

RandomListNode *Solution138::copyRandomList(RandomListNode *head)
{
    if(head == NULL)
        return NULL;
    RandomListNode *p,*q;
    p = head;
    while (p)
    {
        q = new RandomListNode(p->label);
        q->next = p->next;
        p->next = q;
        p = p->next->next;
    }
    p = head;
    q = p->next;
    RandomListNode *res;
    while(q)
    {
        if(p->random)
            q->random = p->random->next;
        p = q->next;
        if(p)
            q = p->next;
        else
            q = NULL;
    }

    p = head;
    q = head->next;
    res = q;
    while(p)
    {
        p->next = q->next;
        p = q->next;
        if(p)
        {
            q->next = p->next;
            q = p->next;
        }
        else
            q->next = NULL;
    }
    return res;
}
