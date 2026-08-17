/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->child != nullptr) {


                Node* temp1 = flatten(temp->child);
                Node* nexttemp = temp->next;
                temp1->prev = temp;
                 temp->next = temp1;
                 temp->child=nullptr;
                while (temp1->next != nullptr) {
                    temp1 = temp1->next;
                }

                if (nexttemp != nullptr) {
                    temp1->next = nexttemp;
                    nexttemp->prev = temp1;
                }
            }
            temp = temp->next;
        }
        return head;
    }
};