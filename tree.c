#include<stdio.h>
#include<stdlib.h>

struct node{
int item;
struct node* left;
struct node* right;
};

struct node* creatnode (value){

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
    inorder(root->right);

}

void postorder(struct node* root)
{
    if (root == NULL)
    {
            return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d->", root->item);

}
void preorder(struct node* root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d->",root->item);
    preorder(root->left);
    preorder(root->right);
}
main()
{
    struct node* root = creatnode(8);

    insertleft(root,2);
    insertleft(root->left,7);
    insertright(root->left,16);
    insertleft(root->left->right,4);
    insertright(root->left->right->left,9);
    insertright(root,9);
    insertleft(root->right,2);

    printf("Inorder: \n");
    inorder(root);
    printf("\n");
     printf("Postorder: \n");
    postorder(root);
    printf("\n");
     printf("Preorder: \n");
    preorder(root);

}
