#include <stdio.h>

#define false 0
#define true 1

int main() {
    int t;
     
    while (scanf("%d",&t) && t) {
          int a[10000 + 2], i;
          for (i=0; i<t; i++) scanf("%d",&a[i]);
          a[t]=a[0];
          a[t+1]=a[1];
           
          int down=false;
          int up=false;
           
          if (a[0]<a[1]) up=true;
          else down=true;
           
          int peak=1;
          for (i=2; i<t; i++) {
              if (up && (a[i-1]>a[i])) {
                 peak++;
                 up=false;
                 down=true;
              } else if (down && (a[i-1]<a[i])) {
                   peak++;
                   up=true;
                   down=false;
              }
          }
          if (up && (a[t]<a[t+1])) peak++;
          else if (down && (a[t]>a[t+1])) peak++;
          printf("%d\n",peak);
    }
    return 0;
}
