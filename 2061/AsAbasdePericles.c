#include <stdio.h>
#include <string.h>

int main() {
    int total, acao, i;
    char p[7];
    scanf("%d %d", &total, &acao);
    
    for(i = 0; i < acao; i++) {
        scanf("%s", p);
        if(strcmp(p, "fechou") == 0) {
            total++;
        } else if(strcmp(p, "clicou") == 0) {
            total--;
        }
    }

    printf("%d\n", total);

    return 0;
}
