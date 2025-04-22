#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
}
main()

{
    struct node *head= malloc(sizeof(struct node));
    head->data=5;
    head->link=NULL;


    struct node *first=malloc(sizeof(struct node));
    first->data=10;
    first->link=NULL;
    head->link=first;


    struct node *second=malloc(sizeof(struct node));
    second->data=15;
    second->link=NULL;
    first->link=second;

    struct node *temp=head;
    while(temp !=NULL)
    {
        printf("%d",temp->data);
        if(temp->link!=NULL)
        {
            printf("->");
        }
        temp=temp->link;
    }
    printf("\n");


    struct node *third=malloc(sizeof(struct node));
    third->data=20;
    third->link=NULL;
    head->link=third;
    third->link=first;


    struct node *any=head;
    while(any !=NULL)
    {
        printf("%d",any->data);
        if(any->link!=NULL)
        {
            printf("->");
        }
        any=any->link;
    }
}

