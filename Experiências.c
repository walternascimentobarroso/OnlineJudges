#include <stdio.h>

int main() {
	int e, i, total = 0, totalC = 0, totalR = 0, totalS = 0;
	float perC = 0.0, perR = 0.0, perS = 0.0;
	scanf("%d", &e);
	char string[e];
	int vetor[e];
	
	for(i = 0; i < e; i++) {
		scanf("%d %c", &vetor[i], &string[i]);
	}
	for(i = 0; i < e; i++) {
		total += vetor[i];
		if(string[i] == 'C') {
			totalC += vetor[i];
		} else if(string[i] == 'R') {
			totalR += vetor[i];
		} else if(string[i] == 'S') {
			totalS += vetor[i];
		}
	}
	perC = totalC * 100;
	perC /= total;
	perR = totalR * 100;
	perR /= total;
	perS = totalS * 100;
	perS /= total;
	
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", totalC);
	printf("Total de ratos: %d\n", totalR);
	printf("Total de sapos: %d\n", totalS);
	printf("Percentual de coelhos: %.2f %%\n", perC);
	printf("Percentual de ratos: %.2f %%\n", perR);
	printf("Percentual de sapos: %.2f %%\n", perS);
	
	return 0;
}
