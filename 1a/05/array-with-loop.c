#include <stdio.h>

int main(void)
{
    int a[5] = {1, 1, 2, 6, 24}; // a[] = ...;
    int i;

    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
