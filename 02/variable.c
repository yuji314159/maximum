#include <stdio.h>

int main(void)
{
    int num1;
    int num2 = 3;
    double pi = 3.14, e = 2.71;
    char zero;

    num1 = 2;
    zero = '0';

    printf("num1: %d, num2: %d\n", num1, num2);
    printf("pi: %f, e: %f\n", pi, e);
    printf("zero: %c (0x%02x)\n", zero, zero);

    return 0;
}
