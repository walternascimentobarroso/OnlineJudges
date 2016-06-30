#include <stdio.h>
#include <string.h>

int x[100000+10];
int y[100000+10];

int main(){
	int a, b, i, counta, countb, input;
	while(scanf("%d %d", &a, &b) && a && b){
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		counta=0;
		countb=0;
		for(i = 0; i < a; i++){
			scanf("%d", &input);
			x[input]++;
		}
		for(i = 0; i < b; i++){
			scanf("%d", &input);
			y[input]++;
		}

		for(i = 1; i <= 100000; i++){
			if(x[i] && !y[i]) counta++;
			if(y[i] && !x[i]) countb++;
		}
		if(counta <= countb)
			printf("%d\n", counta);
		else
			printf("%d\n", countb);
	}
}

