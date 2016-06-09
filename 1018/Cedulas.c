#include <stdio.h>

int main() {
	int valor, total;
	
	scanf("%d",&valor);
	
	printf("%d\n", valor);
	
	total = (int)valor/100;
	
	printf("%d nota(s) de R$ 100,00\n", total);
	
	valor = valor-(total*100);
	
	total = (int)valor/50;
	
	printf("%d nota(s) de R$ 50,00\n", total);
	
	valor = valor-(total*50);
	
	total = (int)valor/20;
	
	printf("%d nota(s) de R$ 20,00\n", total);
	
	valor = valor-(total*20);
	
	total = (int)valor/10;
	
	printf("%d nota(s) de R$ 10,00\n", total);
	
	valor = valor-(total*10);
	
	total = (int)valor/5;
	
	printf("%d nota(s) de R$ 5,00\n", total);
	
	valor = valor-(total*5);
	
	total = (int)valor/2;
	
	printf("%d nota(s) de R$ 2,00\n", total);
	
	valor = valor-(total*2);
	
	total = (int)valor/1;
	
	printf("%d nota(s) de R$ 1,00\n", total);
	
	return 0;
}

