#include "solution143.h"

Solution143::Solution143()
{
}

void Solution143::reorderList(ListNode *head)
{
    if(head == NULL)
        return;
    ListNode* fast = head->next;
    ListNode* slow = head;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    fast = slow;
    slow = slow->next;
    fast->next = NULL;
    ListNode* th = new ListNode(0);
    while(slow != NULL)
    {
        fast = slow->next;
        slow->next = th->next;
        th->next = slow;
        slow = fast;
    }
    ListNode* h = head;
    slow = th->next;
    while(slow != NULL)
    {
        fast = h->next;
        h->next = slow;
        slow = slow->next;
        h->next->next = fast;
        h = fast;
    }
}
