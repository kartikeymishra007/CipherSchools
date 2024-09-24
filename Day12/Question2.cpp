#include<iostream>
using namespace std;
// Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list.
// Input: A linked list with elements 10 -> 20 -> 30, and a new data 40
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        this->data = value;
    }
};
void insertAtEnd(Node* &head, int value){
    Node* newNode = new Node(value);
    if (head == NULL){
        head = newNode;
        return;
    }
    Node* helper = head;
    while(helper->next != NULL){
        helper = helper->next;
    }
    helper->next = newNode;
}
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
    Node* head = new Node(10);
    Node* Node2 = new Node(20);
    Node* Node3 = new Node(30);
    head->next = Node2;
    Node2->next = Node3;
    int value = 40;
    insertAtEnd(head,value);
    printList(head);
    return 0;
}