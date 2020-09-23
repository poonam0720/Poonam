#include<stdio.h>
int main(){

      int a = 10;
      int b = 20;
      
      int *iptr = &a;
      
      printf("%p\n",&a);
      printf("%p\n",&b);
      printf("%p\n",&iptr);
      
      return 0;
}
/*
0x7ffce2020be8
0x7ffce2020bec
0x7ffce2020bf0

*/
