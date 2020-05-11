#include <stdio.h>

int main() {
    int e, i, temp, j;
    while(scanf("%d", &e) && e) {
 		int v[e];
        for(i = 0; i < e; i++) 
			v[i] = i+1;
        for(i = 1; i < e; i++) {
            temp = v[i];
            for(j = i; j < e-1; j++)
                v[j] = v[j+1];
            v[j] = temp;
        }
        printf("Discarded cards: ");
        for(i = 0; i < e-2; i++) {
            printf("%d, ", v[i]);
        }
        printf("%d\n", v[i++]);
        printf("Remaining card: %d\n", v[i]);
    }
    return 0;
}
