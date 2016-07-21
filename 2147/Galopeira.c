#include <stdio.h>
#include <string.h>

int main() {
    int e, i;
    float total;
    scanf("%d", &e);
    char g[10001]; 
    for(i = 0; i < e; i++) {
        scanf("%s", g);
        total = strlen(g);
        printf("%.2f\n", total/100);
    }
    return 0;
}
