#include<stdio.h>
int main(){

     const int a=10;
     int b=20;
     
     int *const iptr = &a;
     
     printf("%d\n",*iptr);//10
     
     *iptr = 11;
     
     printf("%d\n",*iptr);
     
     return 0;
}
/*

warning : initialization discard 

10
11

*/
