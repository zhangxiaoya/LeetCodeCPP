#include "solution019.h"

Solution019::Solution019()
{
}

ListNode* Solution019::removeNthFromEnd(ListNode *head, int n)
{
    if(head == NULL)
        return NULL;
    ListNode* th = new ListNode(0);
    th ->next = head;
    ListNode* p = th;
    ListNode* q = th;
    while(q != NULL && n > 0)
    {
        q = q->next;
        --n;
    }
    if(q == NULL && n > 0)
        return head;
    while (q != NULL) {
        q = q->next;
        p = p->next;
    }
    ListNode* t = p->next;
    p->next = t->next;
    delete t;
    return th->next;
}
