#include<iostream>
using namespace std;
// Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value.
// Input: A linked list with elements 10 -> 20 -> 30 -> 40
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        this->data = value;
    }
};
void printList(Node* &head){
    if(head == NULL){
        cout << "Linked List is empty.";
    }
    Node* helper = head;
    while(helper != NULL){
        cout << helper->data << " ";
        helper = helper->next;
    }
}
int main(){
    Node* head = NULL;
    Node* Node1 = new Node(10);
    Node* Node2 = new Node(20);
    Node* Node3 = new Node(30);
    Node* Node4 = new Node(40);
    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = Node4;
    head = Node1;
    printList(head);
    return 0;
}