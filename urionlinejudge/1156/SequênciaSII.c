#include <stdio.h>

int main() {
	double soma=0, j=1, aux, i;

	for(i=1; i<=39; i+=2){
		aux = (i/j);
		soma += aux;
		j = j*2;
	}
    printf("%.2lf\n", soma);
    return 0;
}
