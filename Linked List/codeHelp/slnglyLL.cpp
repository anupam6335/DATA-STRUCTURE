// Q:Reverse a linked list
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"\nmemory is free for node with data: "<<value<<endl;
    }
};


void insertAtHead(Node *&head, int data){
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtLast(Node *&tail, int data){
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next;
    
}
void insertAtMiddle(Node* &head,Node* &tail, int data ,int pos){
    if(pos == 1){
        insertAtHead(head,data);
        return;
    }
    int i = 0;
    Node* temp = head;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }   
    if(temp->next == NULL){
        insertAtLast(tail, data);
        return;
    } 
    Node *newNode = new Node(data);
    newNode->next=temp->next;
    temp->next = newNode;

}


void deleteNode(Node* &head,Node* &tail, int pos){

    // delete first node
    if(pos == 1){   
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }else{
        // delete any node
        int i=1;
        Node* curr = head;
        Node* pre = NULL;
        while(i<pos){
            pre = curr;
            curr = curr->next;
            i++;
        }   
        pre->next = curr->next;
        curr->next = NULL;
        tail = pre;
        delete curr;
    } 
    // TODO: issue with tail pointer
}



void print(Node *&head){
    Node *temp = head;
    cout<<"\t\t";
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(void){
    Node *node = new Node(10);
    Node *head = node;
    Node *tail = node;

    insertAtLast(tail,20);
    insertAtLast(tail,40);
    insertAtLast(tail,50);
    insertAtLast(tail,60);

    cout<<endl<<endl;
    print(head);
    deleteNode(head,tail,4);
    print(head);
     cout<<head->data<< "  "<<tail->data;
    cout<<endl<<endl;
 /*    int n; cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter data: ";
        int data; cin>>data;
        cout<<"Enter options:\n1.insert at head\n 2.insert at last \n 3.insert at middle \t: ";
        int op; cin>>op;
        switch(op){
            case 1: insertAtHead(head,data); break;   
            case 2: insertAtLast(tail,data); break;   
            case 3:{
                cout<<"Enter pos: ";
                int pos; cin>>pos;
                insertAtMiddle(head,tail,data,pos);
                break; 
            }  
        }
    }

    print(head);
    cout<<head->data<< "  "<<tail->data; */

     /* 
    // insertAtHead(head, 20);
    // insertAtHead(head, 40);
    // insertAtHead(head, 60);
    // insertAtHead(head, 80);
    cout<<endl<<endl;
    insertAtLast(tail,20);
    insertAtLast(tail,40);
    insertAtLast(tail,50);
    insertAtLast(tail,60);
    insertAtMiddle(head, tail, 30, 5);
    print(head);

    cout<<head->data<< "  "<<tail->data;
    cout<<endl<<endl; */
    return 0;
}