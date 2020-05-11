#include <stdio.h>

int main() {
    int e, i, dif;

    while(scanf("%d", &e) && e) {
        int v[e];
        for(i = 0 ; i < e; i++) {
            scanf("%d", &v[i]);
            dif = (v[i]%2 == 0) ? 2 : 1;
            printf("%d\n", (v[i]*2)-dif);
        }
    }
    
    return 0;
}
