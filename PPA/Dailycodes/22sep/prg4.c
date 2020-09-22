#include<stdio.h>
int main(){

       const int a = 10;
       
       const int *iptr = &a;
       
       int *iptr2 = &a;
       
       *iptr2 = 20;
       
       printf("%d\n",a);
       printf("%d\n",*iptr);
       printf("%d\n",*iptr2);
       
       return 0;
}
/*
20
20
20

*/
