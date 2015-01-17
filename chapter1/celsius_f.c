#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = 0.0;

    printf("This is a celsius to fahr program\n");
    while (celsius <= upper) {
        fahr = celsius * 9.0 / 5.0 + 32;
        celsius = (fahr - 32.0) * (5.0 / 9.0);
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius+ step;
    }
}
