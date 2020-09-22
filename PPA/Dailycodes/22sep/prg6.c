#include<stdio.h>
int main(){

     const int a=10;
     int b=20;
     
     const int *const iptr = &a;
     
     printf("%d\n",*iptr);//10
     
     iptr = &b;// error
     
     printf("%d\n",*iptr);
     
     return 0;
}

