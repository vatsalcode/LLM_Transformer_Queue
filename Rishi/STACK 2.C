#include <stdio.h>
#include <stdlib.h>

struct stack
{
   int size, top;
   int *arr;
};

int isempty(struct stack *ptr)
{
   if (ptr->top == -1)
   {
      return 1;
   }
   return 0;
}

int isfull(struct stack *ptr)
{
   if (ptr->top == ptr->size - 1)
   {
      return 1;
   }
   return 0;
}
void push(struct stack *ptr, int val)
{
   if (isfull(ptr))
   {
      printf("stack overflow");
   }
   else
   {
      ptr->top++;
      ptr->arr[ptr->top] = val;
   }
}
int pop(struct stack *ptr)
{
   if (isempty(ptr))
   {
      printf("Stack underflow");
      return 0; //Assuming 0 is not in the stack
   }
   else
   {
      int val = ptr->arr[ptr->top];
      ptr->top--;
      return val;
   }
}

int main()
{
   struct stack *s = (struct stack *)malloc(sizeof(struct stack));
   s->size = 10;
   s->top = -1;
   s->arr = (int *)malloc(s->size * sizeof(int));
   //Now stack has been created succedfully upto this step
   printf("Before pushing\n");
   printf("%d  ", isempty(s));
   printf("%d  ", isfull(s));
   push(s, 13);
   printf("\nAfter pushing\n");
   printf("%d  ", isempty(s));
   printf("%d  ", isfull(s));
   printf("\nPopped %d from stack", pop(s));
   printf("\nAfter popping\n");
   printf("%d  ", isempty(s));
   printf("%d  ", isfull(s));

   return 0;
}
