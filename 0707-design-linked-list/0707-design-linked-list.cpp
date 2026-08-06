class Node
{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=nullptr;
    }
};

class MyLinkedList {
    private:
Node*head=nullptr;

public:
   MyLinkedList() {
        this->head = nullptr;
    }

    int get(int index) {
        int count = 0;
        Node* temp = head;
        while(temp != nullptr && count < index) {
            temp = temp->next;
            count++;
        }
        if(temp != nullptr) return temp->val;
        else return -1;
    }

    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
    }

    void addAtTail(int val) {
        if(head == nullptr) {
            head = new Node(val);
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new Node(val);
    }

    void addAtIndex(int index, int val) {
        if(index == 0) {
            addAtHead(val);
            return;
        }
        int count = 0;
        Node* temp = head;
        while(temp != nullptr && count < index-1) {
            temp = temp->next;
            count++;
        }
        if(temp != nullptr) {
            Node* temp2 = new Node(val);
            temp2->next = temp->next;
            temp->next = temp2;
        }
    }

    void deleteAtIndex(int index) {
        if(head == nullptr) return;
        if(index == 0) {
            Node* del = head;
            head = head->next;
            delete del;
            return;
        }
        int count = 0;
        Node* temp = head;
        while(temp->next != nullptr && count < index-1) {
            temp = temp->next;
            count++;
        }
        if(temp->next != nullptr) {
            Node* del = temp->next;
            temp->next = del->next;
            delete del;
        }
    }

    void display() {
        Node* temp = head;
        cout << "List: ";
        while(temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */