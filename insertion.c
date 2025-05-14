#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void insertAtBeginning(struct node** head, int newData)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct node** head, int newData){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    struct node* temp = *head;
    newNode->data = newData;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertPos(struct node** head, int pos, int newData){
    if(pos < 1){
        printf("invalid position !");
       
    }

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = newData;


    if(pos == 1){
        newNode->next = *head;
        *head = newNode;
        return;
        
    }

    struct node* prev = *head;
    int count = 1;
    while(count < pos-1 && prev != NULL){
        prev = prev->next;
        count++;
    }
    
    if(prev == NULL){
        printf("invalid position\n");
        
    }

    newNode->next = prev->next;
    prev->next = newNode;
}

void print(struct node* head){
    struct node* temp = head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));

    head->data = 10;
    head->next = NULL;

    second->data = 20;
    second->next = NULL;
    head->next = second;

    third->data = 30;
    third->next = NULL;
    second->next = third;

    printf("original list: ");
    print(head);

    insertAtBeginning(&head,5);

    printf("after insertion at beginning: ");
    print(head);

    insertAtEnd(&head,40);

    printf("after insertion at the end: ");
    print(head);

    insertPos(&head,3,50);

    printf("after insertion at the specified position: ");
    print(head);


    return 0;
}