#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
int isempty(struct Node* top)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
};
int isfull(struct Node* top)
{
    struct Node* p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL)
    {
        return 1;
    }
    return 0;

};
void linedlistTraversal(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node* push(struct Node* top,int x)
{
    if(isfull(top))
    {
        printf("Stack overflow\n");
    }
    struct Node* p=(struct Node*)malloc(sizeof(struct Node));
    p->data =x;
    p->next = top;
    top=p;
    return top;
}
int pop(struct Node** top)
{
    if(isempty(*top))
    {
        printf("Stack underflow\n");
    }
    struct Node* p = *top;
    *top = (*top)->next;
    int x =p->data;
    free(p);
    return x;
}
int peek(struct Node* top,int pos)
{
    struct Node* p = top;
    for(int i=0;(i<pos-1 && p != NULL);i++)
    {
        p=p->next;
    }
    if(p != NULL)
    {
        return p->data ;
    }
    return -1;
}
int bottompeek(struct Node* top)
{
    struct Node* p = top;
    while(p!=NULL)
    {
        p = p->next;
    }
    return p->data;
}
int main()
{
    struct Node* top =NULL;
    top = push(top,78);
    top = push(top,7);
    top = push(top,77);
    top = push(top,72);
    top = push(top,71);
    top = push(top,74);
    //int element =pop(&top);
    //printf("The popped element is %d\n",element);
    linedlistTraversal(top);
    // for(int i=0;i<6;i++)
    // {printf("\nThe value at position %d is %d",i,peek(top,i));}
    
    printf("The bottom most value is %d",bottompeek(top));
    return 0;
}