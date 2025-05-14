#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
    int data;
    struct node* next;
};

bool search(struct node* head, int element){
    struct node* current = head;
    while(current != NULL){
        if(current->data == element){
            return true;
        }

        current = current->next;
    }
    
    return false;
}

struct node* createNode(int newData){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = newData;
    newNode->next = NULL;
    return newNode;
}

int main(){
    struct node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    head->next->next->next->next = createNode(50);

    if(search(head, 50)){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}