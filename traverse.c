#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* createNode(int newData){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = newData;
    newNode->next = NULL;
    return newNode;
}

void printList(struct node* head){
    while(head != NULL){
        printf("%d  ",head->data);
        head = head->next;
    }
}

int main(){
    struct node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    printf("list : ");
    printList(head);

    return 0;
}