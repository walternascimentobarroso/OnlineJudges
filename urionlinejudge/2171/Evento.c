#include <stdio.h>

int main() {
   long long int a, b;
   while(scanf("%lld %lld", &a, &b) && a+b != 0)
        printf("%lld\n", a*b);
   return 0;
}
