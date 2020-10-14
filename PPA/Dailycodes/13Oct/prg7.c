#include<stdio.h>

int factNum(int num);

void main() {

      int val;
      
      printf("Enter number for factorial=\n");
      scanf("%d",&val);
      
      int ret =  factNum(val);
      
      printf("%d\n",ret);
}

int factNum(int num){

      int fact = 1;
      
      for(int i = 1; i <=num; i++) {
      
           fact = fact * i;
      }
      
     // printf("Factorial = %d\n",fact);
     
     return fact;
}

/*

Enter number for factorial=
4
24


*/
