#include <stdio.h>

int main() {
    long c, lc;

    lc = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            lc++;
        }
    }

    printf("line is %ld\n", lc);
    return 0;
}
