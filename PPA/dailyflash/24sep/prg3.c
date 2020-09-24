#include<stdio.h>
int main(){

      int const i = 10;
      int j=20;
      
      int  const *ptr = &i;
      
      printf("ptr:%d\n",*ptr);
      *ptr = 100;
      ptr =&j;
      
      printf("ptr:%d\n",*ptr);
      return 0;
}

/* pointer ptr(*ptr)  is constant and variable i is also constant.If the varaible is constant and pointer which holds the address of that variable is also constant then we cannot change the value of that variable. On line 10  *ptr = 100 is trying to change the value of variable i. Hence, error occurs at line 10.

*/
