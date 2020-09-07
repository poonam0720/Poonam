#include<stdio.h>
int main()
{
   int n1,n2;
   
   printf("Enter numbers=\n");
   scanf("%d %d",&n1,&n2);
   
   printf("Before swap=%d %d\n",n1,n2);
   
   n1=n1+n2;
   n2=n1-n2;
   n1=n1-n2;
   
   printf("After swap=%d %d\n",n1,n2);
   
   return 0;
}
/*
Enter numbers=
10
30
Before swap=10 30
After swap=30 10


Enter numbers=
40
60
Before swap=40 60
After swap=60 40


*/
