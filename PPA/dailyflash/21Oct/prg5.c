#include<stdio.h>

void fibonacciSeries(int n);

void main() {

     int num;
     
     printf("Enter number to print fibocci series=\n");
     scanf("%d",&num);
     
     fibonacciSeries(num) ;
}

void fibonacciSeries(int n)  {

      int temp, n1 = 0, n2 = 1;
      
      printf("Fibocci series.\n");
      
      for(int  i = 0; i < n; i++){
      printf("%d ",n1);
      
      temp = n1 + n2;
      n1 = n2;
      n2 = temp;
      
      }
      
      
}

/*
Enter number to print fibocci series=
10
Fibocci series.
0 1 1 2 3 5 8 13 21 34

*/
