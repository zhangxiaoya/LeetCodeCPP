#include "solution082.h"

Solution082::Solution082()
{
}

ListNode* Solution082::deleteDuplicates(ListNode *head)
{
    if(head == NULL)
        return NULL;
    ListNode* th = new ListNode(0);
    th->next = head;
    ListNode* p = th;
    ListNode* q = p->next;
    ListNode* t,*tt;
    while(q != NULL)
    {
        t = q->next;
        while(t != NULL && t->val == q->val)
            t = t->next;
        if(q->next == t)
        {
            p = q;
            q = q->next;
        }
        else
        {
            tt = q;
            q = q->next;
            while(q != t)
            {
                delete tt;
                tt = q;
                q = q->next;
            }
            p->next = q;
        }
    }
    return th->next;
}
