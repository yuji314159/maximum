#include <stdio.h>

int greater(int x, int y);
// int greater(int, int);

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d is greater than %d.\n", greater(a, b), -greater(-a, -b));

    return 0;
}

int greater(int x, int y)
{
    return x >= y ? x : y;
}
