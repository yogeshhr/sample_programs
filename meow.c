#include <stdio.h>

void meow(int n);
int main(void)
{
    meow(30);
}
void meow(int n)
{
    for(int i=0 ; i<n ; i++)
    {
        printf("meow\n");
    }
}
    /*int i = 0;

    while (i<3)
    {
        printf("meow\n");
        i++;
    }
    */