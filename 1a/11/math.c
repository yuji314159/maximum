#include <stdio.h>
#include <math.h>

int main(void)
{
    double px, py, ax, ay, bx, by;
    double ad, bd;

    scanf("%lf %lf %lf %lf %lf %lf",
            &px, &py, &ax, &ay, &bx, &by);

    ad = sqrt(pow(ax - px, 2) + pow(ay - py, 2));
    bd = sqrt(pow(bx - px, 2) + pow(by - py, 2));

    if (ad > bd)
        puts("A");
    else if (bd > ad)
        puts("B");
    else
        puts("EQUAL");

    return 0;
}
