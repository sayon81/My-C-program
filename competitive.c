#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100];
    int i=0;
    if (n==0)
    {
        printf("0");
    }

    while(n>0)
    {
        arr[i]=n%2;
        n=n/2;
        i=i+1;
    }

    for (int j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }


}
