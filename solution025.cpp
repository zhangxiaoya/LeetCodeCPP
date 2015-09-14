#include "solution025.h"

Solution025::Solution025()
{
}

ListNode* Solution025::reverseKGroup(ListNode *head, int k)
{
    if(head == NULL || k < 2)
        return head;
    ListNode* th = new ListNode(0);
    th->next = head;
    ListNode* p = th;
    ListNode* q = p;
    ListNode* t;
    ListNode* tt;
    int i = 0;
    while(p->next != NULL)
    {
        if(i < k)
        {
            p = p->next;
            i ++ ;
        }
        else
        {
            t = p->next;
            p ->next = NULL;
            p = q->next;
            q->next = NULL;
            while(p != NULL)
            {
                tt = p->next;
                p->next = q->next;
                q->next = p;
                p = tt;
            }
            while(i > 0)
            {
                q = q->next;
                i--;
            }
            q->next = t;
            p = q;
        }
    }
    if(i == k)
    {
        t = p->next;
        p ->next = NULL;
        p = q->next;
        q->next = NULL;
        while(p != NULL)
        {
            tt = p->next;
            p->next = q->next;
            q->next = p;
            p = tt;
        }
        while(i > 0)
        {
            q = q->next;
            i--;
        }
        q->next = t;
        p = q;
    }
    return th->next;
}
