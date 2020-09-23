#include<stdio.h>
int main(){

      int a = 10;
      int b = 20;
      
      int *iptr = &a;
     
     printf("%d\n",*iptr);
     
      //pointer + int
      
      int *ansptr = 0;
      
      ansptr = iptr +1 ;
      
      printf("%d\n",*ansptr);  //20
}
