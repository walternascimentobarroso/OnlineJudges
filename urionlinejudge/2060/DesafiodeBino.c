#include <stdio.h>

int main() {
    int e, i, total2=0, total3=0, total4=0, total5=0, val;
    scanf("%d", &e);
    for(i = 0; i < e; i++) {
        scanf("%d", &val);
        if((val%2) == 0) 
            total2++;
        if((val%3) == 0) 
            total3++;
        if((val%4) == 0) 
            total4++;
        if((val%5) == 0)
            total5++;
    }
    
    printf("%d Multiplo(s) de 2\n", total2);
    printf("%d Multiplo(s) de 3\n", total3);
    printf("%d Multiplo(s) de 4\n", total4);
    printf("%d Multiplo(s) de 5\n", total5);

    return 0;
}
