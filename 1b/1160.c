#include <stdio.h>

int w, h;
int c[50][50];

const int dx[] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
void fill(int x, int y)
{
    int i;

    c[y][x] = 0;
    for (i = 0; i < 8; ++i) {
        int nx = x + dx[i], ny = y + dy[i];

        if (nx < 0 || w <= nx || ny < 0 || h <= ny)
            continue;
        if (c[ny][nx] == 0)
            continue;

        fill(nx, ny);
    }
}

int main(void)
{
    for (;;) {
        int i, j, ans = 0;

        scanf("%d %d", &w, &h);
        if (w == 0 && h == 0)
            break;

        for (i = 0; i < h; ++i)
            for (j = 0; j < w; ++j)
                scanf("%d", &c[i][j]);

        for (i = 0; i < h; ++i) {
            for (j = 0; j < w; ++j) {
                if (c[i][j] == 1) {
                    fill(j, i);
                    ++ans;
                }
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}
