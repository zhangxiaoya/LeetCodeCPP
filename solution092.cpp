#include "solution092.h"

Solution092::Solution092()
{
}

ListNode* Solution092::reverseBetween(ListNode *head, int m, int n)
{
    if(head == NULL)
        return NULL;
    if(m == n)
        return head;
    int len = n-m+1;
    ListNode* th = new ListNode(0);
    th->next = head;
    ListNode*p = th;
    --m;
    while(m > 0)
    {
        p = p->next;
        m--;
    }
    ListNode* q = p->next;
    p->next = NULL;
    ListNode* t;
    ListNode* tail = q;
    while(len > 0)
    {
        t = q->next;
        q->next = p->next;
        p->next = q;
        q = t;
        len --;
    }
    tail->next = t;
    return th->next;
}
