#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* deleteHead(struct node* head){
    if(head == NULL){
        return NULL;
    }

    struct node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct node* deletePos(struct node* head, int pos){
    struct node* prev;
    struct node* temp = head;

    if(head == NULL){
        return NULL;
    }

    if(pos == 1){
        head = head->next;
        free(temp);
        return head;
    }

    for(int i = 1; temp != NULL && i<pos; i++){
        prev = temp;
        temp = temp->next;
    }
    if(temp != NULL){
        prev->next = temp->next;
        free(temp);
    }
    else{
        printf("position is not present\n");
    }
    return head;
}

struct node* deleteLast(struct node* head){
    
    if(head == NULL){
        return NULL;
    }
    
    if(head->next == NULL){
        free(head);
        return head;
    }

    struct node* second_last = head;
    while(second_last->next->next != NULL){
        second_last = second_last->next;
    }

    free(second_last->next);
    second_last->next = NULL;
    return head;
}

void print(struct node* head){
    
    while(head != NULL){
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct node* createNode(int newdata){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = newdata;
    newNode->next = NULL;
}

int main(){
    struct node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    head->next->next->next->next = createNode(50);

    printf("original list : ");
    print(head);

    deletePos(head, 3);
    printf("after deletion at specific position : ");
    print(head);

    head = deleteHead(head);
    printf("after deletion of first element: ");
    print(head);

    deleteLast(head);
    printf("after deletion of last element : ");
    print(head);
    
}