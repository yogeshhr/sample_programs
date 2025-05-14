#include <stdio.h>
#include <stdlilb.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
    node *list = NULL;
    node *n = malloc(sizeof(node));
    n->number = 1;
    n->next = NULL;
    list = n;
    node *n = malloc(sizeof(node));
    n->number = 2;
    n->next = NULL;
    n->next = list;
    list = n;
}