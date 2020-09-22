#include<stdio.h>
int main(){

     const int a=10;
     
     int *iptr = &a;
     
     printf("%d\n",*iptr);
     
     *iptr = 11;
     
     printf("%d\n",*iptr);
     
     return 0;
}
/*
10
11

if we declare constant variable and address passed to that variable we can change the value of that variable using pointer because pointer have all th acces to that variable as it stores its address.

*/
