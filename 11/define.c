#include <stdio.h>

#define OFF 0
#define ON  1
#define MAX_N 1000000

int main(void)
{
    int n, i, ans = 0;
    int a[MAX_N], b[MAX_N];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        b[i] = OFF;
    }

    for (i = 0; i < n; i++) {
        if (a[i] == ON) {
            if (i == 0) {
                b[0] = ON;
                b[1] = ON;
            } else if (i == n - 1) {
                b[n - 2] = ON;
                b[n - 1] = ON;
            } else {
                b[i - 1] = ON;
                b[i] = ON;
                b[i + 1] = ON;
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (b[i] == ON) {
            ans++;
        }
    }
    printf("%d\n", ans);

    return 0;
}
