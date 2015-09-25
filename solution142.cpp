#include "solution142.h"

Solution142::Solution142()
{
}

ListNode* Solution142::detectCycle(ListNode *head)
{
    if(head == NULL)
        return NULL;
//    map<ListNode*,int> m;
//    while (head != NULL)
//    {
//        if(m.find(head) == m.end())
//        {
//            m.insert(std::make_pair(head,1));
//            head = head->next;
//        }
//        else
//            return head;
//    }
//    return NULL;
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
        {
            while (head != slow) {
                head = head->next;
                slow = slow->next;
            }
            return head;
        }
    }
    return NULL;
}
