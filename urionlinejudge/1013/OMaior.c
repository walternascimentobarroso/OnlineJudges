#include <stdio.h>
#include <stdlib.h>

int main()
{
    int MaiorAB,a,b,Maior,c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    MaiorAB=(a+b+abs(a-b))/2;
    
    Maior=(MaiorAB+c+abs(MaiorAB-c))/2;
    
    printf("%d eh o maior\n", Maior);
    return 0;
}

