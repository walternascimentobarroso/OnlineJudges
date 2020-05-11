#include <stdio.h>
  
int main() {

 char a[10], b[10];
   int y, i=0;
       
   scanf("%d", &y);
       
   while(y > i ){
    scanf("%s %s", a, b);
       if(strcmp(a,"tesoura")==0 && strcmp(b,"papel")==0){
        printf("Caso #%d: Bazinga!\n", i+1);
       }else if(strcmp(a,"papel")==0 && strcmp(b,"pedra")==0){
        printf("Caso #%d: Bazinga!\n", i+1);
       }else if(strcmp(a,"pedra")==0 && strcmp(b,"lagarto")==0){
        printf("Caso #%d: Bazinga!\n", i+1);
       }else if(strcmp(a,"lagarto")==0 && strcmp(b,"Spock")==0){
        printf("Caso #%d: Bazinga!\n", i+1);
       }else if(strcmp(a,"Spock")==0 && strcmp(b,"tesoura")==0){
        printf("Caso #%d: Bazinga!\n", i+1);
       }else if(strcmp(a,"tesoura")==0 && strcmp(b,"lagarto")==0){
        printf("Caso #%d: Bazinga!\n", i+1);
       }else if(strcmp(a,"lagarto")==0 && strcmp(b,"papel")==0){
        printf("Caso #%d: Bazinga!\n", i+1);
       }else if(strcmp(a,"papel")==0 && strcmp(b,"Spock")==0){
        printf("Caso #%d: Bazinga!\n", i+1);
       }else if(strcmp(a,"Spock")==0 && strcmp(b,"pedra")==0){
        printf("Caso #%d: Bazinga!\n", i+1);
       }else if(strcmp(a,b)==0){
        printf("Caso #%d: De novo!\n", i+1); 
       }else if(strcmp(a,"pedra")==0 && strcmp(b,"tesoura")==0){
        printf("Caso #%d: Bazinga!\n", i+1);
       }else{
        printf("Caso #%d: Raj trapaceou!\n", i+1);
         }
          
      i++;   
     }
    return 0;
}
