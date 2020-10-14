#include<stdio.h>
void main() {

      char *name = "core2web";
      
      void *ptr = name;
      
      printf("%c\n",*ptr);
}

/*
compile time error

*/
