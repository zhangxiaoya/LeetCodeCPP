#include "solution237.h"

Solution237::Solution237()
{
}

void Solution237::deleteNode(ListNode *node)
{
    if(node == nullptr)
        return;
    node->val = node->next->val;
    node->next = node->next->next;
}
