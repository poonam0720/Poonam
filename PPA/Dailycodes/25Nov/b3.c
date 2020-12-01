#include<stdio.h>

int b = 30;

auto void fun() {

     auto int x  = 20;
     printf("%d\n",x);  //20
}

void main() {

     auto int a = 10;
     
     printf("%d\n",a);//10
     
     fun();
}

//warning
