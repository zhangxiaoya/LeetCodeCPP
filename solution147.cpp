#include "solution147.h"

Solution147::Solution147()
{
}

ListNode* Solution147::insertionSortList(ListNode *head)
{
    if(head == NULL)
        return NULL;
    ListNode* th = new ListNode(0);
    ListNode* h = th;
    ListNode* t;
    while(head != NULL)
    {
        while(h->next != NULL && h->next->val < head->val)
            h = h->next;
        t = h->next;
        h->next = head;
        head = head->next;
        h->next->next = t;
        h = th;
    }
    return th->next;
}
