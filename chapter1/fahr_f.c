#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = 0.0;

    printf("This is a fahr to celsius program\n");
    while (fahr <= upper) {
        celsius = (fahr - 32.0) * (5.0 / 9.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
