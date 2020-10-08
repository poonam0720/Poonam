#include<stdio.h>
int main() {

       int x = 20;
       int *const ptr = &x;
       
       printf("%p\n",ptr);
       
       ptr++;
       
       printf("%p\n",ptr);
}
