class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode dummy(0, head);
        ListNode* pre = &dummy;

        for (int i = 1; i < left; ++i) {
            pre = pre->next;
        }

        ListNode* cur = pre->next;
        for (int i = 0; i < right - left; ++i) {
            ListNode* nxt = cur->next;
            cur->next = nxt->next;
            nxt->next = pre->next;
            pre->next = nxt;
        }

        return dummy.next;
    }
};
