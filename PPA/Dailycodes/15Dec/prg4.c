#include<stdio.h>

#define SQR(a) (a*a)
#undef SQR(a)

void main() {

          printf("%d\n",SQR(5));
}
