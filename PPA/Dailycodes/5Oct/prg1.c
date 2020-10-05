#include<stdio.h>
int main() {


      int x = 10;
      
      int *ptr  = &x;
      
      int **pptr = &ptr;
      
      printf("%p\n",ptr);  //100
      
      printf("%p\n",pptr);  //200
      
      printf("%ld\n",sizeof(ptr));
      
      printf("%ld\n",sizeof(pptr));
      
      return 0;
}
/*
10
0x7ffc8fdf45d4
0x7ffc8fdf45d8
8
8

*/
