#include "solution234.h"

Solution234::Solution234()
{

}

bool Solution234::isPalindrome(ListNode *head)
{
    if(head == NULL || head->next == NULL)
        return true;
    ListNode *fast,*slow,*tail;
    fast = slow = head;
    while(fast && fast->next)
    {
        tail = fast->next;
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode* thead;
    if(fast != NULL)
    {
        tail = fast;
        thead = slow->next;
    }
    else
        thead = slow;
    ListNode* p = thead->next;
    thead->next = NULL;

    ListNode* q;
    while(p)
    {
        q = p->next;
        p->next = thead;
        thead = p;
        p = q;
    }
    p = head;
    q = thead;
    while(p != slow)
    {
        if(p->val != q->val)
            return false;
        p = p->next;
        q = q->next;
    }
    return true;
}
