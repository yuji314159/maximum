#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *((char *)a) - *((char *)b);
}

void reverse(char *str, int l)
{
    int i;
    char t;

    for (i = 0; i < l / 2; ++i) {
        t = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = t;
    }
}

int get_next_term(int a, int l)
{
    char buf[13];
    int max, min;

    sprintf(buf, "%d000000", a);
    buf[l] = '\0';

    qsort(buf, l, sizeof(char), compare);
    min = atoi(buf);

    reverse(buf, l);
    max = atoi(buf);

    return max - min;
}

int main(void)
{
    for (;;) {
        int a[21], l;
        int i, j, ans_i, ans_j;

        scanf("%d %d", &a[0], &l);
        if (a[0] == 0 && l == 0)
            break;

        for (i = 1;; ++i) {
            int f;

            a[i] = get_next_term(a[i - 1], l);

            f = 0;
            for (j = 0; j < i; ++j) {
                if (a[i] == a[j]) {
                    ans_i = i;
                    ans_j = j;
                    f = 1;
                    break;
                }
            }
            if (f)
                break;
        }

        printf("%d %d %d\n", ans_j, a[ans_j], ans_i - ans_j);
    }

    return 0;
}
