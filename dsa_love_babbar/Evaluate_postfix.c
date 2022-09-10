#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
 
char stackTop(struct stack* sp){
    return sp->arr[sp->top];
}
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
char push(struct stack* ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int precedence(char ch){
    if(ch == '('||ch == ')')
        return 4;
    else if(ch == '*' || ch=='/')
        return 3;
    else if(ch == '+' || ch=='-')
        return 2; 
    else
        return 0;
}
 
int isOperator(char ch){
    if(ch=='+' || ch=='-' ||ch=='*' || ch=='/') 
        return 1;
    else
        return 0;
}

char* infixToPostfix(char* infix)
{
    struct stack * sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 10; 
    sp->top = -1;
    sp->arr = (char *) malloc(sp->size * sizeof(char));
    char * postfix = (char *) malloc((strlen(infix)+1) * sizeof(char));
    int i=0; // Track infix traversal
    int j = 0; // Track postfix addition 
    while (infix[i]!='\0')
    {
        if(!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(infix[i])> precedence(stackTop(sp))){
                push(sp, infix[i]);
                i++;
            }
            else{
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (sp->top != -1)    
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
void eval(char *e)
{
    int n1,n2,n3,num,i=0;
    struct stack * sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 10; 
    sp->top = -1;
    sp->arr = (char *) malloc(sp->size * sizeof(char));
    while(*e != '\0')
    {
        if(!isOperator(*e))
        {
            num = *e-48;
            push(sp,num);
            i++;
        }
        else
        {
            n1 = pop(sp);
            n2 = pop(sp);
            switch(*e)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push(sp,n3);
        }
        e++;
    }
    printf("\nThe result of expression =  %d\n\n",pop(sp));
}
int main()
{
    int x = 2,y=3,z=4,k=4,d=9;
    char * infix = "2+2-3+4";
    printf("postfix is %s", infixToPostfix(infix));
    eval(infixToPostfix(infix));
    return 0;
}
