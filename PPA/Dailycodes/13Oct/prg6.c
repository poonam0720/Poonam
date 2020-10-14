#include<stdio.h>

void factNum(int num);

void main() {

     int val;
     
     printf("Enter number for factorial=\n");
     scanf("%d",&val);
     
     factNum(val);
}

void factNum(int num) {

     int fact = 1;
     for(int i = 1; i <=num ; i++){
     
          fact = fact * i;
     }
     
     printf("Factorial = %d\n",fact);
}

/*
Enter number for factorial=
5
Factorial = 120


Enter number for factorial=
6
Factorial = 720

*/
