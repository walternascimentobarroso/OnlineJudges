#include <stdio.h>
#include <string.h>

int main() {
    char n1[1000], n2[1000];
    int i, j, tam, tam2, sub, caso=0, pos;
    while(scanf("%s\n%s", n1, n2) != EOF) {
        caso++;
        tam = strlen(n1);
        tam2 = strlen(n2);
        sub=0;
        j=0;
        for(i = 0; i < tam2; i++) {
            if(n2[i] == n1[j]) {
                j++;
                if(j == tam) {
                    sub++;
                    pos=i-tam+1;
                    j=0;
                }
            } else {
                if(j > 0)
					i--;
                j=0;
            }
        }
        printf("Caso #%d:\n", caso);
        if(sub == 0) {
            printf("Nao existe subsequencia\n");
        } else {
            printf("Qtd.Subsequencias: %d\n", sub);
            printf("Pos: %d\n", pos+1);
        }
        printf("\n");
    }
    return 0;
}
