//Implementing stack using linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}

struct node *push(struct node *top, int val)
{
    if (isfull(top))
    {
        printf("Stack overflow\n");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = val;
        n->next = top;
        top = n;
        return top;
    }
}  

int main()
{
    struct node *top = NULL;
    top = push(top, 78);
    printf("%d", top->data);
    return 0;
}
