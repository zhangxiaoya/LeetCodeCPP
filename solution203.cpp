#include "solution203.h"


Solution203::Solution203()
{

}

ListNode* Solution203::removeElements(ListNode *head, int val)
{
    if(head == NULL)
        return head;
    ListNode* thead;
    while(head != NULL && head->val == val)
    {
        thead = head->next;
        delete head;
        head = thead;
    }
    if(head == NULL)
        return head;
    ListNode* p,*q;
    p = head;
    q = head->next;
    while (q != NULL)
    {
        if(q->val == val)
        {
            p->next = q->next;
            delete q;
        }
        else
            p = p->next;
        if(p != NULL)
            q = p->next;
        else
            q = NULL;
    }
    return head;
}
