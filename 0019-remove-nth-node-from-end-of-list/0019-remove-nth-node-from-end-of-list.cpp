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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int end = 0;
        if (head == nullptr) {
            return head;
        }

        ListNode* temp = head;

        while (temp != nullptr) {
            temp = temp->next;
            end++;
        }
        int check = end - n;

        if (end == n) {
            
            head = head->next;
            return head;
        }
        int count = 1;
        ListNode* temp2 = head;
        while (temp2->next->next != nullptr && count != check) {
            temp2 = temp2->next;
            count++;
        }
        ListNode* temp3 = temp2->next->next;
        delete temp2->next;
        temp2->next = temp3;

        return head;
    }
};