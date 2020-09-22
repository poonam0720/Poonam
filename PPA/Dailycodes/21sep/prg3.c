#include<stdio.h>
int main(){

      int a=10,b=20;
     int *iptr=0;
     
     iptr = &a;
     printf("%p\n",iptr);//Address
     printf("%d\n",*iptr);//10
     
     a=13;
     
     printf("%d\n",*iptr);  //13
     
     *iptr = 15;
     
     printf("%d\n",a);
    // printf("%p\n",iptr);
     
     return 0;
}
/*
0x7ffe591e0d28
10
13
15

*/
