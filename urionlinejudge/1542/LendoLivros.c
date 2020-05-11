#include <stdio.h>

int main () {
    int q, d, p, pag;
    double re;
    while (scanf ("%d", &q), q>0){
        scanf (" %d %d", &d, &p);
        re = (double)(q*d)/-(q-p);
        pag = (re+d)*q;
        if (pag==1)
            printf ("%d pagina\n", pag);
        else
            printf ("%d paginas\n", pag);
    }
    return 0;
}
