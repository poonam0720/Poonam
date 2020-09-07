#include<stdio.h>
int main()
{
     int q,r,dividend,divisor;
     
     printf("Enter dividend and divisor=\n");
     scanf("%d %d",&dividend,&divisor);
     
     q=dividend / divisor;
     r=dividend % divisor;
     
     printf("Quotient=%d\nRemainder=%d\n",q,r);
     
     return 0;
}
/*
Enter dividend and divisor=
10
5
Quotient=2
Remainder=0


Enter dividend and divisor=
80
5
Quotient=16
Remainder=0
*/ 
