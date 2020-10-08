#include<stdio.h>
int main() {

      int x = 20;
      int *ptr = &x;
      
      *ptr += 20;
      
      printf("%d %d\n",*ptr,x);
}
