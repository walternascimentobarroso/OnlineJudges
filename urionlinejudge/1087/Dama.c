#include <stdio.h>

int main() {
	int X1, Y1, X2, Y2, cont, cont1;

	while(scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2) && X1!=0 && Y1!=0 && X2!=0 && Y2!=0) {		
		cont = X1>X2 ? X1-X2 : X2-X1;
		cont1 = Y1>Y2 ? Y1-Y2 : Y2-Y1;

		if(X1==X2 && Y1==Y2)
			printf("0\n");
		else if(X1==X2 || Y1==Y2 || (X1-X2) == (Y1-Y2) || cont == cont1 )
			printf("1\n");
		else
			printf("2\n");
	}	
	return 0;
}
