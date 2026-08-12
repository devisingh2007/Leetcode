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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

       while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
}


ListNode *pre=nullptr;
ListNode *curr=slow;

while(curr!=nullptr)
{
    ListNode *currnext=curr->next;
    curr->next=pre;
    pre=curr;
    curr=currnext;
}
ListNode *n2=head;
ListNode *n1=pre;
while(n1!=nullptr)
{
    if(n1->val!=n2->val)    return false;

n2=n2->next;
            n1=n1->next;
    
}
    
    return true;
    }
};