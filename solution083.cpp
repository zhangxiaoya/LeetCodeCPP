#include "solution083.h"

Solution083::Solution083()
{
}

ListNode* Solution083::deleteDuplicates(ListNode *head)
{
    if(head == NULL)
        return NULL;
    ListNode* p = head;
    ListNode* q = head->next;
    ListNode* t;
    while(q != NULL)
    {
        if(q->val == p->val)
        {
            t = q;
            q = q->next;
            p->next = q;
            delete t;
        }
        else
        {
            p = p->next;
            q = q->next;
        }
    }
    p ->next = NULL;
    return head;
}
