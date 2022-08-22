// Q:
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *pre;
    // constructor
    Node(int data){
        this->data = data;
        this->pre = NULL;
        this->next = NULL;
    }

    // Destructor
    // ~Node(){
    //     int value = this->data;
    //     if(this->next != NULL){
    //         delete next;
    //         this->next=NULL;
    //     }
    //     cout<<"\nmemory is free for node with data: "<<value<<endl;
    // }
};

void print(Node* &head){
    cout<<"\t\t";
    Node* temp = head;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(void){
    Node* node = new Node(2);
    Node* head = node;
    print(head);
    return 0;
}