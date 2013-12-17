#include <stdio.h>

int main(void)
{
    char str[] = "string";
    // char str[7] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        printf("%d: %c\n", i, str[i]);
    }

    printf("%s\n", str);

    str[0] = 'S';
    printf("%s\n", str);

    str[3] = '\0';
    printf("%s\n", str);

    return 0;
}
