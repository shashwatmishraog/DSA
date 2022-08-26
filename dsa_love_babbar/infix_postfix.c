#include<stdio.h>
struct stack{
    int size ;
    int top;
    char *arr;
 };
 int stacktop(struct stack* sp)
 {
    return sp->arr[sp->top];
 }
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
 
char* in_to_post(char* infix)
{
    struct stack *sp;
    sp->size =100;
    sp->top=-1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char * postfix= (char *)malloc(strlen((infix)+1)* sizeof(char));
    int i=0;
    int j=0;
    while (infix[i]!="\0")
    {
        if(!isOpreator(infix[i]))
        {
            postfix[i]=infix[i];
            j++;
            i++;
        }
        else
        {
            if(prec(infix[i])>prec(stacktop(sp)))
            {
                push(sp,infix[i]);
                i++;
            }
        }
    }
    
}

int main()
{
    return 0;

}