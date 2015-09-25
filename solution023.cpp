#include "solution023.h"

Solution023::Solution023()
{
}

ListNode* Solution023::mergeKLists(vector<ListNode *> &lists)
{
    if(lists.size() == 0)
        return NULL;
    if(lists.size() == 1)
        return lists[0];
    return mergeKLists(lists,0,lists.size());
}

ListNode* Solution023::mergeKLists(vector<ListNode *> &lists, int beg, int end)
{
    if(beg +1 == end)
        return lists[beg];
    int mid = (beg + end) >> 1;
    ListNode* l = mergeKLists(lists,beg,mid);
    ListNode* r = mergeKLists(lists,mid,end);

    return merge2List(l,r);
}

ListNode* Solution023::merge2List(ListNode *h1, ListNode *h2)
{
    if(h1 == NULL)
        return h2;
    if(h2 == NULL)
        return h1;
    ListNode* h;
    ListNode* p;
    ListNode* p1 = h1;
    ListNode* p2 = h2;
    if(p1->val < p2->val)
    {
        h = p1;
        p1 =p1->next;
    }
    else
    {
        h = p2;
        p2 = p2->next;
    }
    p = h;
    while(p1 != NULL && p2 != NULL)
    {
        if(p1->val < p2->val){
            p->next = p1;
            p1 = p1->next;
        }
        else{
            p->next = p2;
            p2 = p2->next;
        }
        p = p->next;
    }
    if(p1 != NULL)
        p->next = p1;
    else
        p->next = p2;
    return h;
}
