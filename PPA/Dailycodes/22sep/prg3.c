#include<stdio.h>
int main(){

      int a = 10;
     
     const int *iptr = &a;
    
     printf("%d\n",a);    //10
     printf("%d\n",*iptr);  //10
     
     a=20;
     
     printf("%d\n",a);    //20
     printf("%d\n",*iptr);  //20
     
     return 0;
}
/*
10
10
20
20

In this program we have declared constant pointer variable and if we change the value using variable it can be changes because pointer holds the address and here address is not chaging, value gets changed using variable.
*/
