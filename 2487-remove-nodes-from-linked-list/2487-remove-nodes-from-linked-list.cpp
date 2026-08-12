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
ListNode* reverse(ListNode *head)
{
ListNode *pre=nullptr;
ListNode *curr=head;

while(curr!=nullptr)
{
    ListNode *currnext=curr->next;
    curr->next=pre;
    pre=curr;
    curr=currnext;
}
return pre;
}
    ListNode* removeNodes(ListNode* head) {
      head=reverse(head);

        ListNode * dummy= new ListNode(0,head);
        ListNode *temp=dummy;

        while(temp->next!=nullptr)
        {
            if(temp->val>temp->next->val)
            {
                temp->next=temp->next->next;
            }
            else
            {

            temp=temp->next;
            }


        }
dummy->next=reverse(dummy->next);
        return dummy->next;
    }
};