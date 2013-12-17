#include <stdio.h>

int main(void)
{
    int v[] = {0, 1, 2, 3, 4};
    int *p;

    printf("    v = %p\n", v);
    printf("&v[0] = %p\n", &v[0]);
    printf("      *v = %d\n", *v);
    printf("(*&v[0]) = %d\n", *(&v[0]));

    p = v;

    printf("p[2] = %d\n", p[2]);
    p[2] = 5;
    printf("p[2] = %d\n", p[2]);

    printf("p     = %p\n", p);
    printf("p + 1 = %p\n", p + 1);

    return 0;
}
