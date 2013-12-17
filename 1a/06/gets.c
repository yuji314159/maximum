#include <stdio.h>

int main(void)
{
    char str[128];

    gets(str);
    printf("gets:  %s\n", str);

    scanf("%s", str);
    printf("scanf: %s\n", str);

    return 0;
}
