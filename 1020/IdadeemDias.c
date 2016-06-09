#include <stdio.h>

int main() {
	int e, ano, mes, dia;	
	
	scanf("%d", &e);
	
	ano = (int) e/365;
	
	e = e-(365*ano);
	mes = (int) e/30;
	
	dia = (int) e-(mes*30);
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
	return 0;
}

