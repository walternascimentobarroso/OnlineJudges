#include <stdio.h>
#include <math.h>

int main() {
	int entrada, i, j, anos = 0;
	scanf("%d", &entrada);
	float vetor[entrada][4];
	for(i = 0; i < entrada; i++) {
		scanf("%f %f %f %f", &vetor[i][0], &vetor[i][1], &vetor[i][2], &vetor[i][3]);
	}
	for(i = 0; i < entrada; i++) {
		if(vetor[i][0] > vetor[i][1]) {
			printf("0 anos.\n");
		} else {
			for(j = 0; j <= 100; j++) {
				vetor[i][0] = (int)floor(vetor[i][0]*(1+vetor[i][2]/100));
				vetor[i][1] = (int)floor(vetor[i][1]*(1+vetor[i][3]/100));
				anos++;
				if(vetor[i][0] > vetor[i][1]) {
					printf("%d anos.\n", anos);
					break;
				}
				if(anos == 100) {
					printf("Mais de 1 seculo.\n");
					break;
				}
			}
			anos = 0;
		}
	}


	return 0;
}
