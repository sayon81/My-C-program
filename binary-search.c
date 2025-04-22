#include<stdio.h>

int main()
{
    int arr[]={2,3,5,7,8,9,10,18,19,29};
    int l=0,r=9;
    int x;
    scanf("%d",&x);

    while(l<=r)
    {
        int mid =(r+l)/2;
        if (arr[mid]==x)
        {
            printf("The number is available in %d index",mid);
            break;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else if (arr[mid]>x)
        {
            r=mid-1;
        }

    }

    if(l>r)
    {
        printf("Number is not available.");
    }


     return 0;
}
