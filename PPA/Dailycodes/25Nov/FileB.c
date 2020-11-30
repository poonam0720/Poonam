#include<stdio.h>

void fun(int x, int y) {

     extern int a;
     
     printf("%d\n",x+y);  //30
     printf("%d\n",a);   //10
}
