#include "solution141.h"

Solution141::Solution141()
{
}

bool Solution141::hasCycle(ListNode *head)
{
    if(head == NULL)
        return false;
    ListNode* p;
    ListNode* q;
    p = head;
    q = head;
    while(p != NULL && p->next != NULL)
    {
        p = p->next->next;
        q = q->next;
        if(p == q)
            return true;
    }
    return false;
}
