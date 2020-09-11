#include<stdio.h>
int main()
{
     int n1,n2,mul=0,div=0;
     
     printf("Enter numbers=\n");
     scanf("%d %d",&n1,&n2);
     
     mul=n1*n2;
     
     if(n1>n2)
     {
          div=n1/n2;
     }
     else
     {
          div=n2/n1;
     }
     printf("Multiplication=%d\n",mul);
     printf("Division=%d\n",div);
     
     return 0;
}
/*
Enter numbers=
10
20
Multiplication=200
Division=2


*/
