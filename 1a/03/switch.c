#include <stdio.h>

int main(void)
{
    int a = 2;

    switch (a) {
        case 1:
            printf("a is 1.\n");
            break;
        case 2:
            printf("a is 2.\n");
            break;
        case 3:
            printf("a is 3.\n");
            // no break
        default:
            printf("a is larger than 2.\n");
            break;
    }

    return 0;
}
