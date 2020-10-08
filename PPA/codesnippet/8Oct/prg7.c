#include<stdio.h>
int main() {

      int x = 20;
      int *ptr = &x;
      
      printf("%p\n",ptr);
      
      x++;
      
      printf("%p\n",ptr);
}
