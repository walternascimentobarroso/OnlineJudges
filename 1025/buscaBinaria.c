#include <stdio.h>

int pesquisaBinaria ( int vet[], int chave, int Tam)
{
     int inf = 0;     //Limite inferior  (o primeiro elemento do vetor em C é zero          )
     int sup = Tam-1; //Limite superior  (termina em um número a menos 0 a 9 são 10 numeros )
     int meio;
     while (inf <= sup) 
     {
          meio = (inf + sup)/2;
          if (chave == vet[meio])
               return meio;
          if (chave < vet[meio])
               sup = meio-1;
          else
               inf = meio+1;
     }
     return -1;   // não encontrado
}

int main() {
	int v[5] = {1, 2, 3, 4, 5}, i;
	printf("%d\n", pesquisaBinaria(v, 7, 5));

	return 0;
}
