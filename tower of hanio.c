#include <stdio.h>

void towerOfHanoi(int n, char beg, char aux, char end) {
    if (n == 1) {
        printf("\nMove disk 1 from rod %c to rod %c", beg, end);
        return;
    }
    towerOfHanoi(n - 1, beg, end, aux);
    printf("\nMove disk %d from rod %c to rod %c", n, beg, end);
    towerOfHanoi(n - 1, aux, beg, end);
}

int main() {
    int n = 3;
    towerOfHanoi(n, 'A', 'B', 'c');
    return 0;
}
