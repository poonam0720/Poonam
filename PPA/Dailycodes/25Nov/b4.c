#include<stdio.h>

void fun() {

       static int x= 10;
       x++;
       printf("%d\n",x);
}

void main() {

       fun();
       fun();
       fun();
}

/*
11
12
13
*/
