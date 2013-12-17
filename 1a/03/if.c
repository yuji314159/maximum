#include <stdio.h>

int main(void)
{
    int a = 2, b = 3;

    if (a == 2) {
        printf("a is 2.\n");
    }

    if (b == 2) {
        printf("b is 2.\n");
    } else {
        printf("b is not 2.\n");
    }

    if (a == 2) {
        if (b == 3) {
            printf("a is 2, and b is 3.\n");
        }
    }

    return 0;
}
