#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,k;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&k);

    int value= abs(x-y);
    printf("%d",value);

    if(value<=k)
    {
        printf("Yes");
    }
    else
    {
            printf("No");
    }

    return 0;

}

