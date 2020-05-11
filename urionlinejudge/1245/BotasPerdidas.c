#include <stdio.h>

int main() {
    int e, t, i;
    char p;
    while(scanf("%d", &e) != EOF) {
        int vE[e], vD[e], d = 0, es = 0, j, total = 0, pI, pJ;
        for(i = 0; i < e; i++) {
            scanf("%d %c", &t, &p);
            if(p == 'D') {
                vD[d] = t;
                d++;
            } else {
                vE[es] = t;
                es++;
            }
        }
        pI = (es > d) ? es : d;
        pJ = (es > d) ? d : es;
        for(i = 0; i < pI; i++) {
            for(j = 0; j < pJ; j++) {
                if(es > d) {
                    if(vE[i] == vD[j] && vE[i] != 0) {
                        total++;
                        vD[j] = 0;
                        vE[i] = 0;
                        continue;
                    }
                } else {
                    if(vD[i] == vE[j] && vD[i] != 0) {
                        total++;
                        vE[j] = 0;
                        vD[i] = 0;
                        continue;
                    }
                }
            }
        }
        printf("%d\n", total);
    }
    return 0;
}
