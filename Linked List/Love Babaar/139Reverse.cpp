// Q:Reverse a linked list
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void help(int n,int *arr){
    
}

int main(void){
    Node* node = new Node(10);
    cout << node->data << endl;
    cout << node->next << endl;
    return 0;
}