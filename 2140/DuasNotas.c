#include <stdio.h>

int main() {
    int a, b, total, i, temp, nota, notas[] = {2, 5, 10, 20, 50, 100};

    while(scanf("%d %d", &a, &b) && a+b) {
        total = b-a;
        nota=0;
        if(total < 4 || total > 200) {
            printf("impossible\n");
        } else {
            for(i = 5; i >= 0; i-- ) {
                while(total >= notas[i]) {
                    total -= notas[i];
                    nota++;
                }
            }

            if(nota > 2) {
                printf("impossible\n");
            } else {
                printf("possible\n");
            } 
        }

    }
    return 0;
}
