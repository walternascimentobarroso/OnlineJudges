#include <stdio.h>

int main() {
    int m, d, natal, i, mes[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while(scanf("%d %d", &m, &d) != EOF) {
        natal = 0;
        if(m == 12 && d > 25) {
            printf("Ja passou!\n");
        } else if( m == 12 && d == 25) {
            printf("E natal!\n");
        } else if(m == 12 && d == 24) {
            printf("E vespera de natal!\n");
        } else {
            for(i = 0; i < m-1; i++)
                natal+=mes[i];
            natal+=d;
            printf("Faltam %d dias para o natal!\n", 360-natal);
        }
    }
    return 0;
}
