#include "solution024.h"

Solution024::Solution024()
{
}

ListNode* Solution024::swapPairs(ListNode *head)
{
    if(head == NULL)
        return NULL;
    ListNode* th = new ListNode(0);
    th->next = head;
    ListNode* p;
    ListNode* q;
    ListNode* t;
    ListNode* pre = th;
    p = th->next;
    q = p->next;
    if(q == NULL)
        return head;
    while(p != NULL && q != NULL)
    {
        t = q ->next;
        pre->next = q;
        q->next = p;
        p->next = t;
        pre= pre->next->next;
        p = t;
        if(p != NULL)
            q = p->next;
    }
    return th->next;
}
