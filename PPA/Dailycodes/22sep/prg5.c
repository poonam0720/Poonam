#include<stdio.h>
int main(){

     int a=10;
     int b=20;
     
     int *iptr = &a;
     
     printf("%d\n",*iptr);//10
     
     iptr = &b;
     
     printf("%d\n",*iptr);//20
     
     return 0;
}
/*
10
20

*/
