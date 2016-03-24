#include <stdio.h>

int main() {
	int senha, i, a = 0;
	
	for(i = 0; a == 0; i++) {
		scanf("%d", &senha);
		if(senha == 2002){
			a = i;
		}
	}
	
	for(i = 0; i < a; i++) {	
		printf("Senha Invalida\n");
	}
	printf("Acesso Permitido\n");
	
	return 0;
}
