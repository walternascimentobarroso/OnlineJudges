#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int cont = 1, num = 0 ;
	char cv[8];

	while(cont <= 3){
		gets(cv);
		if(strcmp(cv,"caw caw") != 0){
			if(cv[0] == 42){
				num = num + 4;   
			}
			if(cv[1] == 42){
				num = num + 2;   
			}
			if(cv[2] == 42){
				num = num + 1;   
			}
		} else {
			printf("%d\n",num);   
			num = 0;
			cont++;                  
		}     
	}
	return 0;
}
