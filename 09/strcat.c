#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[7] = "str";

    strcat(str, "ing");

    printf("%s\n", str);

    return 0;
}
