#include <stdio.h>

int main() {
    long nc = 0;

    while (getchar() != EOF) {
        nc++;
    }

    printf("nc count is %ld\n", nc);
    
    return 0;
}
