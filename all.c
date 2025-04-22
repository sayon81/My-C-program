#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n,m;
        scanf("%d %d",&n,&m);


        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {

                if((i+j)%2==0) {
                    printf("2 ");
                } else {
                    printf("3 ");
                }
            }
            printf("\n");
        }
    }
}
