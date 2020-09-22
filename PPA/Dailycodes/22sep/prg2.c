#include<stdio.h>
int main(){

     int a = 10;
     
     const int *iptr = &a;
     
    // *iptr = 11;
     
     printf("%d\n",*iptr);
     
     return 0;
}
/*
10

if we declare constant pointer then we cannot chnage value of the variable as pointer variable is constant.

*/

