#include<stdio.h>
#include<stdlib.h>

struct node{
int item;
struct node* left;
struct node* right;
};

struct node* ctreatnode (value){

struct node* newnode= malloc(sizeof(struct node));

newnode->item=value;
newnode->left=NULL;
newnode->right=NULL;

return newnode;

};

struct node* insertleft(struct node* root,int value)
{
    root->left=creatnode(value);
    return root->left;
};

struct node* insertright(struct node* root,int value)
{
    root->right=creatnode(value);
    return root->right;
};

void inorder(struct node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d->",root->item);
    inporder(root->right);
}

main()

{
    struct node* root = 8;

    insertleft(root,2);
    insertleft(root->left,7);
    insertright(root->left,16);
    insertleft(root->left->right,4);


    insertright(root,9);
    insertleft(root->right,2);

    inorder(root);




}
