#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a;
    scanf("%d",&a);
    int ar[n+1];
    int i = 0;
    int sum=0;


    while (a > 0) {
        ar[i] = a % 10;
        a = a / 10;
        i++;
    }

    for (int j = 0; j < i; j++) {
        if (sum==0)
        {
            sum= ar[j];
        }
        else{
            sum=sum+ar[j];
        }
    }
    printf("%d",sum);

    return 0;
}
