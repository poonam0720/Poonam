#include<stdio.h>
int factorial(int n);

void main()  {

     int num;
     
     printf("Enter number=\n");
     scanf("%d",&num);
     
     printf("factorial of %d is = %d\n",num,factorial(num));
}

int factorial(int n)  {

     int fact = 1;
     
     for(int i = 1; i<=n; i++) 
     fact = fact * i;
           
     return fact;
}

/*
Enter number=
5
factorial of 5 is = 120


Enter number=
6
factorial of 6 is = 720


*/
