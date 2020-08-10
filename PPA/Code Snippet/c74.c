#include<stdio.h>
int main()
{
   int i=1;
   while(i<=10 && 1++)
      printf("Hello");
}

/*
c74.c: In function ‘main’:
c74.c:5:20: error: lvalue required as increment operand
    5 |    while(i<=10 && 1++)


*/
