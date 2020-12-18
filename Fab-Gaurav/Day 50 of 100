#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct node
{
    int data;
    struct node* next;
};
void Movenode(struct node** destRef, struct node** sourceRef);
struct node* SortedMerge(struct node* a, struct node* b)
{
    struct node dummy;
    struct node* tail = &dummy;
    dummy.next = NULL;
    while (1)
    {
        if (a == NULL)
        {
            tail->next = b;
            break;
        }
        else if (b == NULL)
        {
            tail->next = a;
            break;
        }
        if (a->data <= b->data)
            Movenode(&(tail->next), &a);
        else
            Movenode(&(tail->next), &b);
        tail = tail->next;
    }
    return(dummy.next);
}
void Movenode(struct node** destRef, struct node** sourceRef)
{
    struct node* newnode = *sourceRef;
    assert(newnode != NULL);
    *sourceRef = newnode->next;
    newnode->next = *destRef;
    *destRef = newnode;
}
void push(struct node** head_ref, int new_data)
{
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)= new_node;
}
void printList(struct node *node)
{
    while (node!=NULL)
    {
        printf("->%d", node->data);
        node = node->next;
    }
}
int main()
{
 int i,N1,N2;
 scanf("%d",&N1);
 scanf("%d",&N2);
 int a[N1];
 int b[N2];
    struct node* res = NULL;
    struct node* a1 = NULL;
    struct node* b1 = NULL;
    for(i=0;i<N1;i++)
     scanf("%d",&a[i]);
    for(i=0;i<N2;i++)
     scanf("%d",&b[i]);
    for(i=N1-1;i>=0;i--)
     push(&a1,a[i]);
    for(i=N2-1;i>=0;i--)
     push(&b1,b[i]);
    printf("Class A : ");
    printList(a1);
    printf("\nClass B : ");
    printList(b1);
    res = SortedMerge(a1, b1);
    printf("\nJoint Class : ");
    printList(res);
    return 0;
}
