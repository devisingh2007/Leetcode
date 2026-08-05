/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int skipA=0;
        int skipB=0;
ListNode* temp1=headA;
ListNode* temp2=headB;

while(temp1!=nullptr)
{
temp1=temp1->next;
skipA++;
}
while(temp2!=nullptr)
{
temp2=temp2->next;
skipB++;
}
temp1=headA;
temp2=headB;

int skip=skipA-skipB;
if(skip>0)
{
    for(int i=0; i<skip; i++)
    {
        temp1=temp1->next;
    }
}
else if(skip<0)
{
    for(int i=0; i<abs(skip); i++)
    {
        temp2=temp2->next;
    }
}
while(temp1!=nullptr)
{
    if(temp1==temp2)
    {
        return temp1;
    }
        temp2=temp2->next;
        temp1=temp1->next;
    
}

return nullptr;
    }
};