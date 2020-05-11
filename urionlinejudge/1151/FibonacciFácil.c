#include <stdio.h>

int main(){
    int ant = 0, atual = 0, prox = 1, i, num;
    scanf("%d",&num);
    
    for(i = 0; i < num; i++){
		if(i == (num - 1)) {
			printf("%d\n",atual);
		} else {
			printf("%d ",atual);
		}
		ant = atual;
		atual = prox;
		prox = atual + ant;       
    }
    return 0;
}
