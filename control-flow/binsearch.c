#include <stdio.h>
int binsearch(int val, int v[], int n);


int main(void) {
    int a[] = {10, 20, 30, 40, 50};
    int result;
    
    result = binsearch(30, a, 5);
    printf("seach result index is %d", result);
    return 0;
}

int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid]) {
            high = mid - 1;
        } else if (x > v[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}
