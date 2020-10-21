#include<stdio.h>

void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

void main()  {

     void (*arrptr[4])(int, int) = {add,sub,mul,div};
     
     for(int i = 0; i < 4; i++)  {
     
          arrptr[i](20,10);
     }
}


void add(int x, int y)  {

    printf("Add = %d\n",x + y);   //Add = 30
}


void sub(int x, int y)  {

    printf("sub = %d\n",x - y);  //sub = 10
}

void mul(int x, int y)  {

    printf("mul = %d\n",x * y);  //mul = 200
}

void div(int x, int y)  {

    printf("Div = %d\n",x / y);  //Div = 2
}


