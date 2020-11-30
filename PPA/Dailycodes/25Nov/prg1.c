#include<stdio.h>

void fun(int x, int y);
int m = 30;                      //Global

void main() {

          int a = 10;           //Local or Block
          int b = 20;           //Local or Block
          fun(a,b);  
          
       /*   printf("%d\n",m);      //30  */
          
          printf("%d\n",a);      //10
          printf("%d\n",b);      //20
}

void fun(int p, int q)  {

    /*   printf("%d\n",m);      //30  */

        /* printf("%d\n",a);      //error
         printf("%d\n",b);      //error     */
}
