class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* new_list = new ListNode();

        ListNode* l1_p = l1;
        ListNode* l2_p = l2;
        ListNode* new_p = new_list;
        while(l1_p != nullptr && l2_p != nullptr) {
            if(l1_p->val < l2_p->val) {
                new_p->next = l1_p;
                l1_p = l1_p->next;
            } else {
                new_p->next = l2_p;
                l2_p = l2_p->next;
            }
            new_p = new_p->next;
        }
        new_p->next = l1_p != nullptr ? l1_p : l2_p;
        return new_list->next;
    }
};
