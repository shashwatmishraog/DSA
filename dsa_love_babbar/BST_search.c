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


void inorder(struct node*  root )
{
    if(root!= NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right );
    }
}

int isbst(struct node* root)
{
    static struct node *prev=NULL;

    if(root!=NULL)
    {
        if((!isbst(root->left)))
        {
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return(isbst(root->right));
    }
    else{
        return 1;
    }
}

struct node *search(struct node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(key == root->data)
    {
        return root;
    }
    else if(key<root->data)
    {
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}
int main()
{
    struct node *p = createingnode(5);
    struct node *p1 = createingnode(2);
    struct node *p2 = createingnode(7);
    struct node *p11 = createingnode(1);
    struct node *p21 = createingnode(3);

    p->left = p1;;
    p->right = p2;
    p1->left = p11;
    p1->right = p21;
    inorder(p);
    printf("\n");
    if(isbst(p))
    {
        printf("Is a binary tree\n");
    }

    struct node* n = search(p,8);
    if(n!=NULL)
    {
        printf("Found %d\n",n->data);
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}