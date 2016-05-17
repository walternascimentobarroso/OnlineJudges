#include <stdio.h>
#include <string.h>
#define MAX 10

void permutacao(char *string, int fim, char ant[], int nivel);
void shellSort(char *vet, int size);

int main() {
	int e, i;
	char str[MAX], aux[0];
	scanf("%d", &e);

	for(i = 0; i < e; i++) {
		scanf("%s", str);
		shellSort(str, strlen(str));
		permutacao(str, strlen(str), aux, 0);
		printf("\n");
	}
	return 0;
}

void shellSort(char *vet, int size) {
    int i, j;
	char value;
    int gap = 1;
    while(gap < size) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < size; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value < vet[j]) {
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet[j + gap] = value;
        }
    }
}

void permutacao(char *string, int fim, char ant[], int nivel) {
    int i,j,n,idx;
    if (fim > 0) {
        for (i = 0; i < fim; i++) {
            if(i>0){
                if(string[i]==string[i-1]){
                    continue;
                }
            }
 
            char string2[fim - 1];
            char ant2[nivel + 1];
 
            int n = 0;
            for (n = 0; n < nivel; n++) {
                ant2[n] = ant[n];
            }
 
           ant2[n] = string[i];
 
 
            idx = 0;
            for (j = 0; j < fim; j++) {
                if (j != i) {
                    string2[idx] = string[j];
                    idx++;
                }
            }
            permutacao(string2, fim - 1, ant2, nivel + 1);
 
        }
    } else {
		ant[nivel] = '\0';
		printf("%s\n", ant);
    }
}
