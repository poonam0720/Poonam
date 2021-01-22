#include<stdio.h>

#define x 20

void main() {

       printf("%d\n",x);
       
       #if x > 30
              printf("Hello..\n");
       #else
              printf("Hiiii...\n");
       #endif
}
