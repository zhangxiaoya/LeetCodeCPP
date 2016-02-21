#include "solution328.h"

Solution328::Solution328()
{

}

ListNode* Solution328::oddEvenList(ListNode *head)
{
    if(head == NULL)
        return NULL;
    ListNode *p, *q, *t;
    q = head;
    int count = 1;
    while (q->next != NULL)
    {
        count ++;
        q = q->next;
    }
    if(count == 2 || count == 1)
        return head;
    int i = 0;
     p = head;
     t = p->next;
    while(i < count /2)
    {
        p->next = t->next;
        t->next = q->next;
        q->next = t;
        q = t;
        p = p->next;
        t = p->next;
        i++;
    }
    return head;
}
