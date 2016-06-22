#include <stdio.h>

int main() {
    int e, i, count;
    scanf("%d", &e);
    float v[e];
    for(i = 0; i < e; i++) {
        scanf("%f", &v[i]);
        count = 0;
        while(v[i] > 1.0) {
            count++;
            v[i] = v[i]/2;
        }
        printf("%d dias\n", count);
    }
    return 0;
}
