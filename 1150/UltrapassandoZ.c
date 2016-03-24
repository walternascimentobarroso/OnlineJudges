#include <stdio.h>
//1234
int main()
{
    int x, z, Soma, Contador = 0, i = 0;
   
    scanf("%d",&x);
	z = x;
    while(x >= z) {
		scanf("%d", &z);
	}
	
	Soma = x;
	while(Soma <= z) {
		if(Contador == 0) {
			Soma = x + i;		
		} else {
			Soma = Soma + x + i;		
		}
		i++;
		Contador++;
	}
    printf("%d\n", Contador);

    return(0);
}
