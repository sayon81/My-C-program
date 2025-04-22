#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int top=-1;
int arr[];
void push();
void pop();
void show();

int main ()
{
    int choice;
    while(1)
    {
        printf("1.Push the element.\n 2.Pop the element.\n 3.show the element \n 4.End \n ");
        printf("Enter the choice.");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            show();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice");
        }
    }

}

void push()
{
    int x;
    if (top==SIZE-1)
    {
        printf("\n Overflow");
    }
    else
    {
        printf("The element to be added to the stack");
        scanf("%d",&x);
        top=top+1;
        arr[top]=x;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("\n underflown");
    }
    else
    {
    printf("The popped element is:%d ",arr[top]);
    top=top - 1;
    }
}

void show()

{
    if(top== -1)
    {
        printf("under flow");
    }
    else
    {
        printf("The elements are:");
        for(int i=top;i>=0;--i)
        {
            printf("%d\n",arr[i]);
        }
    }

}
