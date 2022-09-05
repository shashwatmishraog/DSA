#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;

};

struct node* createingnode(int data)
{
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->left = NULL;
    p->right = NULL; 
    return p;
};

int main()
{
    struct node *p = createingnode(5);
    struct node *p1 = createingnode(2);
    struct node *p2 = createingnode(3);
    p->left = p1;;
    p->right = p2;
    
    // p = (struct node*)malloc(sizeof(struct node));
    // p->left = NULL;
    // p->right = NULL;  
    return 0;
}