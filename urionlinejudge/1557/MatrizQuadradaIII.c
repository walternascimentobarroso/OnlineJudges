#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void generateMatrix(int);
int numberOfDigits(int);
void printSpaceRepeat(int);

int main(){
    int i,n;

    while(scanf("%d", &n) && n != 0) {
        generateMatrix(n);
        printf("\n");
    }

    return 0;
}

void generateMatrix(int n){
    int i,j,digitsActualNumber,actualNumber,a=0,digitsMaxNumber;
    digitsMaxNumber = numberOfDigits((int)pow(2,2*n-2));
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            actualNumber = (int)pow(2,a);
            digitsActualNumber = numberOfDigits(actualNumber);
            int T = digitsMaxNumber - digitsActualNumber;
            printSpaceRepeat(T);
            printf("%d",actualNumber);
            if(j != n-1) printf(" ");
            a++;
        }
        printf("\n");
        a = i + 1;
    }
}

void printSpaceRepeat(int times){
    int i;
    for(i=0;i<times;i++){
        printf(" ");
    }
}

int numberOfDigits(int n){
    int x = abs(n),digits=0;
    while(x){
        x = x/10;
        digits ++;
    }

    return n!=0 ? digits : 1;
}
