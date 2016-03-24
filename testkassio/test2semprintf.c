#include <stdio.h>

int main() {
 	
	//inicializa as variaveis
	int total=0,mov=0,temp=0, e, i;
     	//recebe a quantidade de contatos que vai ter na lista
	scanf("%d", &e);
	
        //numero de contatos dinamico
	char vetor[e][15];

        //repete ate a quantidade de contatos for igual ao total da lista
	for(i = 0; i < e; i++) {
		scanf("%s", vetor[i]);
	}

        //pecorre cada numero de contato da lista
	for(i = 0; i < e; i++) {
		//verifica se nao é o primeiro contato
		if(i != 0) {
  			//compara cada elemento da string atual com a anterior
			//mov = movimenta dentro da string 
                        //temp utilizada para subtrair no fim do processo
			while(vetor[i][mov] == vetor[i-1][mov]) {
				mov++;
				temp++;		
			}
		}
		//verifica se chegou no final do string e conta a quantidade de caracteres
		while( vetor[i][mov] != '\0') {
			mov++;
		}
                //na primeira vez total recebe  o tamanho da String
		total += mov;
		// e subtrair pelo temporária
		total -= temp;
		//depois reseta as variaveis
		temp = 0;
		mov = 0;
	}
	printf("-----------------\n");
	printf("%d\n", total);	
	return 0;
}
