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
    p = head->next;
    q = head;
    while(p != NULL)
    {
        if(p == q)
            return true;
        p = p->next->next;
        q = q->next;
    }
    return false;
}
