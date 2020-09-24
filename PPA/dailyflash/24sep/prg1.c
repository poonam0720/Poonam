#include<stdio.h>
int main(){

     int a = 10;
     
     int *iptr = &a;
     
     printf("%d\n",*iptr);
     
     *iptr = 20;
     
     printf("%ld\n",sizeof(a));
     
     printf("%d\n",*iptr);
     
     return 0;
     
     
}
/*
10
4
20
*/
