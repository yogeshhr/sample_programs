//program to store multiple elements in singly linked list without creating node for every element
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main(){
    int value[] = {10 , 20 , 30 , 40 , 50};
    int n = sizeof(value)/sizeof(value[0]);

    struct node* head = NULL;
    struct node* tail = NULL;

    for(int i=0; i<n; i++){
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value[i];
        newnode->next = NULL;

        if(head == NULL){
            head = newnode;
        }
        else{
            tail->next = newnode;
        }

        tail = newnode;
    }

    struct node* temp = head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp -> next;
    }
    printf("NULL");

    return 0;

}