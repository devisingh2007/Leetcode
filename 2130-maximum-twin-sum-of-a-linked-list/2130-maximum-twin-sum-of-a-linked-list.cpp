/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* pre = nullptr;
        while (curr) {
            ListNode* currnext = curr->next;
            curr->next = pre;
            pre = curr;
            curr = currnext;
        }
        return pre;
    }
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = reverse(slow);

        int maxi = INT_MIN;
        while (second) {
            int sum = 0;
            sum = head->val + second->val;
            maxi = max(sum, maxi);
            head = head->next;
            second = second->next;
        }

        return maxi;
    }
};