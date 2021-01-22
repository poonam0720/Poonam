#include<stdio.h>

extern int n1;
extern int n2;

int func2(int, int);
void func1();

void main() {

         func1();
         
         printf("GCD = %d\n",func2(n1,n2));
}
