#include <stdio.h>

int main() {
    int e, i, h, m, o;
    scanf("%d", &e);

    for(i = 0; i < e; i++) {
        scanf("%d %d %d", &h, &m, &o);
        if(h < 10) {
            printf("0%d:", h);
        } else {
            printf("%d:", h);
        }
        if(m < 10) {
            printf("0%d - ", m);
        } else {
            printf("%d - ", m);
        }
        if(o == 1) {
            printf("A porta abriu!\n");
        } else {
            printf("A porta fechou!\n");
        }
    }
    return 0;
}
