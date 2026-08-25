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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* ans = nullptr;
        int extra = 0;
        while (l1 || l2||extra) {
            int sum = extra;

            if(l1)
            {
                sum += l1->val ;
            l1 = l1->next;
            }
            if(l2)
            {
                sum += l2->val;
            l2 = l2->next;
            }
            extra = sum / 10;
            
            ListNode* newNode=new ListNode(sum%10);
            newNode->next=ans;
            ans=newNode;
        }
        return ans;
    }
};