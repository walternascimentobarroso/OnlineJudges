#include <stdio.h>

void mens(int media);

int main() {
	float n1, n2, n3, n4, media;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
	
	if(media >= 5.0 && media <=6.9) {
		float n5;
		scanf("%f", &n5);	
		printf("Media: %.1f\n", media);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1f\n", n5);
		mens(media);
		printf("Media final: %.1f\n", (media+n5)/2);
	} else {
		printf("Media: %.1f\n", media);
		mens(media);
	}	
	return 0;
}

void mens(int media) {
	if(media <= 4.9 ) {
		printf("Aluno reprovado.\n");	
	} else {
		printf("Aluno aprovado.\n");	
	}
}

