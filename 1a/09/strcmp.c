#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "str", str2[64];

    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
        printf("same string\n");
    else
        printf("%s %c %s\n", str1,
                strcmp(str1, str2) < 0 ? '<' : '>', str2);

    return 0;
}

