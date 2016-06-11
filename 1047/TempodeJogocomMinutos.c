#include <stdio.h>

int main(){
   int horaIn=0, horaFim=0, minIn=0, minFim=0, horaDurac=0, minDurac=0;

   scanf("%d",&horaIn);
   scanf("%d",&minIn);
   scanf("%d",&horaFim);
   scanf("%d",&minFim);

	if(horaIn == horaFim && horaFim == minIn && minIn == minFim) {
			   printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	} else {
	   if(minIn>minFim){
		  minDurac=(60-minIn)+minFim;
		  horaDurac=horaFim-horaIn-1;
	   }else{
		  minDurac=minFim-minIn;
		  horaDurac=horaFim-horaIn;
	   }

	   if(horaIn>horaFim){
		  horaDurac=(23-horaIn)+horaFim;
	   }
	   
	   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaDurac, minDurac);
	}
   return 0;
}

