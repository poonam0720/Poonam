#include<stdio.h>
int main(){

     int a=10,b=20;
     int *iptr=NULL;
     
     iptr = &a;
     printf("%p\n",iptr);//Address
     printf("%d\n",*iptr);//10
     
     iptr = &b;
     printf("%p\n",iptr);  //Address
     printf("%d\n",*iptr);  //20
     
     return 0;
}

/*
0x7ffc0ff25e48
10
0x7ffc0ff25e4c
20
*/
