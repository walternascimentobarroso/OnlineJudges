#include <stdio.h>

void granal(int vetor[]);

int main() {
	int vetor[4] = {0, 0, 0, 0};
	//granal(vitorInter, vitorGremio, total, empates);
	granal(vetor);
	printf("%d grenais\n", vetor[2]);
	printf("Inter:%d\n", vetor[0]);
	printf("Gremio:%d\n", vetor[1]);
	printf("Empates:%d\n", vetor[3]);
	if(vetor[0] > vetor[1]) {
		printf("Inter venceu mais\n");
	} else {
		printf("Gremio venceu mais\n");
	}
	return 0;
}

void granal(int vetor[]) {
	int inter, gremio, r;
	scanf("%d %d", &inter, &gremio);
	
	vetor[2]++;
	if(inter > gremio) {
		vetor[0]++;
	} else if(inter < gremio) {
		vetor[1]++;
	} else {
		vetor[3]++;
	}
	
	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d", &r);
	
	if(r == 1) {
		granal(vetor);
	}
	
	return;
}
