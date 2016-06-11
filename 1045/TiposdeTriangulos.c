#include <stdio.h>

void order(float vetor[]);
void verify(float vetor[]);

int main() {
	float vetor[3];
	scanf("%f %f %f", &vetor[0], &vetor[1], &vetor[2]);
	
	order(vetor);	
	
	verify(vetor);
	
	return 0;
}

void order(float vetor[]) {
	int i,j;
	for(i = 0; i < 3; i++) {
		for(j = i; j > 0; j--) {
			if(vetor[j] > vetor[j-1]){
				float temp;
				temp = vetor[j-1];
				vetor[j-1] = vetor[j];
				vetor[j] = temp;
			}
		}
	}
}

void verify(float vetor[]) {
	
    if(vetor[0] >= vetor[1]+vetor[2]) {
		printf("NAO FORMA TRIANGULO\n");
	}else {
		if(vetor[0]*vetor[0] == vetor[1]*vetor[1] + vetor[2]*vetor[2]) {
			printf("TRIANGULO RETANGULO\n");
		}
		if(vetor[0]*vetor[0] > vetor[1]*vetor[1] + vetor[2]*vetor[2]) {
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if(vetor[0]*vetor[0] < vetor[1]*vetor[1] + vetor[2]*vetor[2]) {
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(vetor[0] == vetor[1] && vetor[1] == vetor[2] && vetor[0] == vetor[2]) {
			printf("TRIANGULO EQUILATERO\n");
		}else if(vetor[0] == vetor[1] || vetor[1] == vetor[2] || vetor[0] == vetor[2]) {
			printf("TRIANGULO ISOSCELES\n");
		}
	}
}
