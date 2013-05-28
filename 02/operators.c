#include <stdio.h>

int main(void)
{
    int a = 14, b = 3;

    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a / b = %f\n", a / b);
    printf("a / b = %f\n", (double)a / b);
    printf("a %% b = %d\n", a % b);
    printf("\n");

    printf("a = %d, b = %d\n", a, b);
    a = a - 4;
    a -= 4;
    b *= 2;
    printf("a = %d, b = %d\n", a, b);
    printf("\n");

    printf("a = %d, b = %d\n", a++, ++b);
    printf("a = %d, b = %d\n", a, b);
    printf("a = %d, b = %d\n", a--, --b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
