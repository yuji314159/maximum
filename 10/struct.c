#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point flip(struct point p)
{
    int t = p.x;
    p.x = p.y;
    p.y = t;

    return p;
}

int main(void)
{
    struct point p;

    p.x = 2;
    p.y = 3;

    printf("p = (%d, %d)\n", p.x, p.y);

    p = flip(p);

    printf("p = (%d, %d)\n", p.x, p.y);

    return 0;
}
