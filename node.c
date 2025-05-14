#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}node;

int main(){
    struct node *head = NULL; //pointer head to struct node
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->link = NULL;

    printf("%d\n", head->data);
    printf("%d", head);
    return 0;
}
