#include "solution206.h"

Solution206::Solution206()
{

}

ListNode* Solution206::reverseList(ListNode *head)
{
    if(head == NULL || head->next == NULL)
        return head;
    ListNode* thead = head;
    ListNode*p = head->next;
    ListNode*q;
    head->next = NULL;
    while(p != NULL)
    {
        q = p->next;
        p->next = thead;
        thead = p;
        p = q;
    }
    return thead;
}
