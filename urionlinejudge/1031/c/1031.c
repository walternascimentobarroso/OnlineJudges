#include <stdio.h>

int main() {

    int qtd_regioes, m, n, atual, c13;
    while (scanf("%d", &qtd_regioes) && qtd_regioes) {
        for (m = 1; ; m++) {
			n = qtd_regioes;
			atual = 0;
            c13 = 12;
            while (atual != c13) {
                if (atual < c13)
                    c13--;
                n--;
                atual = (atual - 1 + m) % n;
            }
            if (n == 1) {
                printf("%d\n", m);
                break;
            }
        }
    }
    return 0;
}
