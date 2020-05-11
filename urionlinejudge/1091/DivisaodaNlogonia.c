#include <stdio.h>

int main() {
    int e, m, n, i, x, y;
    while(scanf("%d", &e) && e) {
        scanf("%d %d", &m, &n);
        for(i = 0; i < e; i++) {
            scanf("%d %d", &x, &y);
            if(x == m || x == n || y == m || y == n)
                printf("divisa\n");
            else if(x > m && y > n)
                printf("NE\n");
            else if(x < m && y < n)
                printf("SO\n");
            else if(x < m && y > n)
                printf("NO\n");
            else if(x > m && y < n)
                printf("SE\n");
        }
    }
    return 0;
}
