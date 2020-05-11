#include <stdio.h>

int main() {
	int tempo,velocidade;
	float litros;
	
	scanf("%d\n%d", &tempo, &velocidade);
	
	litros = tempo*velocidade;
	
	printf("%.3lf\n", litros/12);
	return 0;
}

