#include <stdio.h>
#include <stdlib.h>

struct Node{
	int num;
	struct Node *prox;
}; 
typedef struct Node node;

int menu(void);
void opcao(node *LISTA, int op);
node *criaNo();
void insereFim(node *LISTA);
void exibe(node *LISTA);
void libera(node *LISTA);


int main(void) {
	node *LISTA = (node *) malloc(sizeof(node));
	if(!LISTA){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}
	LISTA->prox = NULL;
	int opt;
	
	do{
		opt=menu();
		opcao(LISTA,opt);
	}while(opt);

	free(LISTA);
	return 0;
}

int menu(void) {
	int opt;
	
	printf("Escolha a opcao\n");
	printf("1. Exibir lista\n");
	printf("3. Adicionar node no final\n");
	scanf("%d", &opt);
	
	return opt;
}

void opcao(node *LISTA, int op) {
	switch(op){
		case 1:
			exibe(LISTA);
			break;
		case 3:
			insereFim(LISTA);
			break;		
		
		default:
			printf("Comando invalido\n\n");
	}
}

int vazia(node *LISTA) {
	if(LISTA->prox == NULL)
		return 1;
	else
		return 0;
}


void insereFim(node *LISTA) {
	node *novo=(node *) malloc(sizeof(node));
	if(!novo){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}
	printf("Novo elemento: "); scanf("%d", &novo->num);
	novo->prox = NULL;
	
	if(vazia(LISTA))
		LISTA->prox=novo;
	else{
		node *tmp = LISTA->prox;
		
		while(tmp->prox != NULL)
			tmp = tmp->prox;
		
		tmp->prox = novo;
	}
}


void exibe(node *LISTA) {
	if(vazia(LISTA)){
		printf("Lista vazia!\n\n");
		return ;
	}
	
	node *tmp;
	tmp = LISTA->prox;
	
	while( tmp != NULL){
		printf("%5d\n", tmp->num);
		tmp = tmp->prox;
	}
	printf("\n\n");
}
