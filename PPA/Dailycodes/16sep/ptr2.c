#include<stdio.h>
int main(){

   int a = 10;
   int *ptr = 10;
   
   printf("%d\n",a);//10
   printf("%p\n",ptr);//
   printf("%p\n",&a);

   
   return 0;
}
/*
10
0xa
0x7ffd469aa5ac
*/
