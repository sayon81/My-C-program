#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char s1[80], s2[80];
    int value;

    printf("Type string-01: ");
    scanf("%s", s1);

    printf("Type string-02: ");
    scanf("%s", s2);

    value = strcmp(s1, s2);

    if (value > 0) {
        printf("\"%s\" is greater than \"%s\".\n", s1, s2);
    } else {
        printf("\"%s\" is smaller than \"%s\".\n", s1, s2);
    }

    getch();    
}
