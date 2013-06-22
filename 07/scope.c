#include <stdio.h>

int g;

void func1(int l)
{
    g += 2; // access to global variable g
    l += 2; // access to parameter l
}

void func2(int l)
{
    int g = 5;

    g += 2; // access to local variable g
    l += 2; // access to parameter l
}

int main(void)
{
    int l;

    g = 2;
    l = 2;
    printf("g = %d, l = %d\n", g, l);
    func1(l);
    printf("g = %d, l = %d\n", g, l);

    g = 3;
    l = 3;
    printf("g = %d, l = %d\n", g, l);
    func2(l);
    printf("g = %d, l = %d\n", g, l);

    return 0;
}
