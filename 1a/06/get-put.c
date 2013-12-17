#include <stdio.h>

int main(void)
{
    char c;

    puts("Hello, World!");  // without '\n'

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    /*
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    */

    return 0;
}
