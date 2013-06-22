#include <stdio.h>

int greater(int x, int y)
{
    return x >= y ? x : y;
}

int lesser(int x, int y)
{
    return x < y ? x : y;
}

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d is greater than %d.\n", greater(a, b), lesser(a, b));

    return 0;
}
