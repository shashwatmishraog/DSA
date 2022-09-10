#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
void push(struct stack *s,int val)
{
    if(s->top == (s->size -1))
    {
        printf("Stack overflow\n");
    }
    else
    {
        s->top++;
        s->arr[s->top]=val;
    }
}
int pop(struct stack *s)
{
    int a = -1;
    if(s->top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        a = s->arr[s->top];
        s->top--;
    }
    return a;
}
int peek(struct stack *s,int i)
{
    if(s->top-i+1<0)
    {
        printf("Not a valid postion to peek\n");
        return 0;
    }
    else
    {
        return s->arr[s->top-i+1];
    }
}
int main()
{
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size =100;
    s->top=-1;
    s->arr =(int*)malloc(s->size * sizeof(int));
    push(s,45);
    push(s,43);
    push(s,42);
    pop(s);
    for(int i=1;i<4;i++)
    {
        printf("%d\n",peek(s,i));
    }
}