#include<stdio.h>
int main(){

     int a=10,b=20;
     int *iptr=0;
     
     iptr = &a;
     printf("%p\n",iptr);//Address
     printf("%d\n",*iptr);//10
     
     iptr = &b;
     printf("%p\n",iptr);  //Address
     printf("%d\n",*iptr);  //20
     
     return 0;
}
/*
0x7ffea048f288
10
0x7ffea048f28c
20


*/
