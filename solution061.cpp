#include "solution061.h"

Solution061::Solution061()
{
}

ListNode* Solution061::rotateRight(ListNode *head, int k)
{
    if(head == NULL || k < 0)
        return head;
    int len = 0;
    ListNode* p = head;
    while(p != NULL)
    {
        len ++;
        p = p->next;
    }
    k = k % len;
    if(k == 0)
        return head;
    int n = len - k;
    ListNode* q;
    p = head;
    n--;
    while(n > 0)
    {
        p = p->next;
        --n;
    }
    q = p->next;
    p->next = NULL;
    ListNode* t = q;
    while(--k >0)
        t = t->next;
    t ->next = head;
    return q;
}
