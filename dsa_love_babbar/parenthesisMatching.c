#include<stdio.h>
#include<stdlib.h>

 struct stack{
    int size ;
    int top;
    char *arr;
 };

 int isempty(struct stack* ptr)
 {
    if(ptr->top==-1)
    {
        return 1;
    }
    else {
    return 0;
    } 
 }
 int isfull(struct stack *s)
 {
    if(s->top==s->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
 }

 void push(struct stack *s,char val)
 {
    if(isfull(s))
    {
        printf("Stack overflow\n");
    }
    else 
    {
        s->top++;
        s->arr[s->top]=val;
    }
 }
 char pop(struct stack *s)
 {
    if(isempty(s))
    {
        printf("Stack underflow\n");
        return -1;
    }
    else 
    {
        char val = s->top;
        s->top--;
        return val;
    }
 }
 int peek(struct stack *sp,int i)
 {
    if(sp->top-1+1<0)
    {
        printf("Not a valid postion to peek\n");
        return -1;
    }
    else{
        return sp->arr[sp->top+1];
    }
 }
 int parenthesismatch(char *exp)
 {
    struct stack *sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size * sizeof(char));
    for(int i=0;exp[i] != '\0';i++)
    {
        if(exp[i]=="(" ) 
        {
            push(sp,"(");
        }
        else if(exp[i]==")" ) 
        {
            if(isempty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
    if(isempty(sp))
    {
        return 1;
    }
    return 0;
 }
int main()
{
    char *exp="8*((9)";
    if(parenthesismatch(exp))
    {
        printf("The parenthesis match\n");
    }
    else 
    {
        printf("The parenthesis does not match\n");
    }
    return 0;
}