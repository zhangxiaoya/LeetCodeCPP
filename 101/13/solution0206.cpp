class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* new_head = nullptr;
        ListNode* last_head = nullptr;

        while(head != nullptr) {
            last_head = head->next;
            head->next = new_head;
            new_head = head;
            head = last_head;
        }
        return new_head;
    }
};
