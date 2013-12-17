#include <stdio.h>

int main(void)
{
    int triangle[3][2];

    triangle[0][0] = 2;
    triangle[0][1] = 2;
    triangle[1][0] = 5;
    triangle[1][1] = 3;
    triangle[2][0] = 6;
    triangle[2][1] = 1;

    printf("p1 = (%d, %d)\n", triangle[0][0], triangle[0][1]);
    printf("p2 = (%d, %d)\n", triangle[1][0], triangle[1][1]);
    printf("p3 = (%d, %d)\n", triangle[2][0], triangle[2][1]);

    return 0;
}
