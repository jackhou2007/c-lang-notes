#include <stdio.h>

int main() {
    if (EOF == 0) {
        printf("EOF's value is %d", EOF);
    } else {
        printf("EOF's value is %d", EOF);
    } 

    int c;
    while ((c = getchar()) != EOF) {
        printf("%d", EOF);
        putchar(c);
    }
    return 0;
}
