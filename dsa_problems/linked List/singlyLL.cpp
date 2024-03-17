#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int d){
        this->data = d;
        this->next = nullptr;
    }


};
void InsertAtTail(Node* head, int data){
     
    Node* node = head;
     
     while(node->next!=nullptr){
        node = node->next;
    }
    Node *new_node = new Node(data); 
    node->next =new_node;
    

}

void printLinkedList(Node* head){
    
    Node* node = head;
    cout<<"Linked List is: \n";
    while(node->next!=nullptr){
        cout<< node->data<<" ";
        node = node->next;
    }

    cout<<node->data<<endl;

}

int main(){
    
    Node* head = new Node(20);

    printLinkedList(head);

    InsertAtTail(head,12);
    InsertAtTail(head,13);
    InsertAtTail(head,14);
    InsertAtTail(head,15);
    printLinkedList(head);
    
    
    return 0;
}