#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertAtBeginning(Node* &head, int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node* &head, int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(Node* &head, int value , int position){
    if(position == 1){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        return;
    }
    Node* newNode = new Node();
    newNode->data = value;

    Node* temp = head;
    int count = 1;
    while(temp != NULL && count<position-1){
        temp = temp->next;
        count++;
    }

    if(temp == NULL){
        cout<<"position out of bounds."<<endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;

    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    display(head);

    cout<<"insert 5 at beginning : ";
    insertAtBeginning(head, 5);
    display(head);

    cout<<"insert 25 at position 3 : ";
    insertAtPosition(head,25,3);
    display(head);

    return 0;
}