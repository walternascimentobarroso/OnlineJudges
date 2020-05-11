#include <stdio.h>

void notas();
void respos();

int main() {
	notas();
	return 0;
}

void respos() {
	int resp;
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%d", &resp);
	if(resp == 1) {
		notas();
	} else if(resp == 2) {
		return;
		//exit(0);
	} else {
		respos();
	}
}

void notas() {
	float vetor[99], x, y;
	int a = 0, i, j, mens = 0;
	
	for(i = 0; a != 2; i++) {
		scanf("%f", &vetor[i]);
		if(vetor[i] >= 0 && vetor[i] <= 10) {
			if(a == 0) {
				x = vetor[i];
			} else {
				y = vetor[i];
			}
			a++;
		} else {
			mens++;
		}
	}
	
	for (j = 0; j < mens ; j++) {
		printf("nota invalida\n");
	}
	
	printf("media = %.2f\n", (x+y)/2);
	respos();
}
