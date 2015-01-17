#include <stdio.h>

int main() {
    long bc, tc, lc;
    int c;

    bc = 0;
    tc = 0;
    lc = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            bc++;
        }

        if (c == '\t') {
            tc++;
        }

        if (c == '\n') {
            lc++;
        }
    }


    printf("bc is %ld, tc is %ld, lc is %ld\n", bc, tc, lc);

    return 0;
}
