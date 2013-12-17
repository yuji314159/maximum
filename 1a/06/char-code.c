#include <stdio.h>

int main(void)
{
    char c;

    while ((c = getchar()) != EOF) {
        if ('a' <= c && c <= 'z') {
            putchar(c - 'a' + 'A');
        } else {
            putchar(c);
        }
    }

    return 0;
}
