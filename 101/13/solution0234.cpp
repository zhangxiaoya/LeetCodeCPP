class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next) {
            fast= fast->next->next;
            slow = slow->next;
        }
        slow->next = reverse_list(slow->next);
        slow = slow->next;
        while(slow) {
            if(head->val != slow->val) {
                return false;
            }
            head = head->next;
            slow = slow->next;
        }
        return true;
    }

    ListNode* reverse_list(ListNode* head) {
        ListNode* new_head = nullptr;
        ListNode* last_head = head;
        while(head) {
            last_head = head->next;
            head->next = new_head;
            new_head = head;
            head = last_head;
        }
        return new_head;
    }
};
