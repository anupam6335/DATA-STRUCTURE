#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }

        // destructor
        ~Node(){
            int value = this->data;
            // memory free
            if(this->next != NULL) {
                delete next;
                this->next = NULL;
            }

            cout << value << " successfully deleted" ;
            cout<< endl;
        }
};


void insertAtHead(int data, Node* &head) {

    // creating a new node 
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}


void insertAtLast(int data, Node* &tail) {

    // creating a new node
    Node* newNode = new Node(data);

    Node* temp = tail;

    temp->next = newNode;
    newNode->next = NULL;
    tail = tail->next;
}


void insertAtMiddle(int data, Node* &head, Node* &tail, int pos) {
    Node* temp = head;
    
    while(pos > 2) {
        temp = temp->next;
        --pos;
    }

    if(pos == 1) {
        insertAtHead(data, head);
        return;
    }

    if (temp->next == NULL) {
       insertAtLast(data, tail);
       return;
    }
    // creating a new node
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;

    
}


// delete with pos
void deleteNode(Node* &head, int pos) {

    
    // delete first node
    if(pos == 1) {
        Node* temp = head;
        head = head->next;
        // memory free first node
        temp -> next = NULL;
        delete temp;
    } else {
        // delete last node or any node

        Node* prev = NULL;
        Node* curr = head;
        int cnt = 1;

        while(cnt < pos) {

            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

}

// delete with data
void deleteNodeData(Node* &head, Node* &tail, int data) {

    if(head->data == data) {
        Node* temp = head;
        head = head->next;
        // memory free first node
        temp -> next = NULL;
        
        delete temp;
    } else {


        Node* prev = NULL;
        Node* curr = head;

        while(curr != NULL) {
            // cout << curr -> data << " ";
            if(curr-> data == data) break;
            prev = curr;
            curr = curr->next;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;

        if(prev -> next == NULL) tail = prev ;

        delete curr;
    }
}


void printSLL(Node* &head) {

    cout << endl << endl;
    Node* temp = head;

    

    while(temp != NULL) {
        cout << temp->data;
        temp = temp->next;

        if(temp != NULL) cout << "->";
        cout <<" ";
    }
    
}

int main() {

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtLast( 11, tail);
    insertAtLast( 12, tail);

    insertAtHead(9, head);
    insertAtHead(8, head);

    insertAtMiddle(444, head, tail, 1);

    deleteNodeData(head, tail, 12);
    // deleteNode(head,  1);

    printSLL(head);
    cout << endl << endl;
    cout << head->data << " " << tail->data;
    return 0;
}