#include<stdio.h>
void main() {

      char *ptr1 = "core2";
      char *ptr2 = "web";
      
      char *ptr = ptr1 + ptr2;
      
      printf("%s\n",*ptr);
}

/*
compile time error

*/
