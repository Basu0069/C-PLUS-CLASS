#include<iostream>
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

class Linklist{
    Node *head = NULL;
    public:
    void add_Node_at_last(int d){
        if(head == NULL){
            head = new Node(d);
            return;
        }
        Node *curr = head;
        while(curr->next!=NULL){
            curr= curr->next;
        }
        curr->next = new Node(d);
    }
    void print_nodes(){
        Node *curr = head;
        while(curr!=NULL){
            cout<<curr->data<<" ";
        }    }
}

// do it urselft 