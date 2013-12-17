#include <stdio.h>

int main(void)
{
    int a = 1;
    int *p;

    p = &a;

    printf("&a = %p\n", &a);
    printf("p = %p\n", p);
    printf("a = %d\n", a);
    printf("*p = %d\n", *p);

    *p = 2;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);

    return 0;
}
