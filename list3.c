#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

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

    struct node* temp = head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}