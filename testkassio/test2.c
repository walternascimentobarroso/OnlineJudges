#include <stdio.h>

int main() {
	//inicializa as variaveis
	int total=0,mov=0,temp=0, e, i;
	scanf("%d", &e);
	
        //numero de contatos dinamico
	char vetor[e][15];

         //repete ate a quantidade de contatos for igaual a entrada
	for(i = 0; i < e; i++) {
		scanf("%s", vetor[i]);
	}

        //pecorre cada string do vetor
	for(i = 0; i < e; i++) {
		printf("-----------------\n");
		printf("%s\n", vetor[i]);
		if(i != 0) {
			while(vetor[i][mov] == vetor[i-1][mov]) {
				printf("temp: %d\n", temp);
				printf("mov: %d\n", mov);
				printf("vetor i: %c\n", vetor[i][mov]);
				printf("vetor i-1: %c\n", vetor[i-1][mov]);
				mov++;
				temp++;		
				printf("temp: %d\n", temp);
				printf("mov: %d\n", mov);
			}
		}
		printf("temp: %d\n", temp);
		printf("mov: %d\n", mov);
		while( vetor[i][mov] != '\0') {
			mov++;
		}
		printf("temp: %d\n", temp);
		printf("mov: %d\n", mov);
		total += mov;
		total -= temp;
		temp = 0;
		mov = 0;
		printf("total: %d\n", total);
		printf("-----------------\n");
	}
	printf("-----------------\n");
	printf("%d\n", total);	
	return 0;
}
