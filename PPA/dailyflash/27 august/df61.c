#include<stdio.h>
int main()
{
     int n1,n2,add=0,sub=0;
     
     printf("Enter numbers=\n");
     scanf("%d %d",&n1,&n2);
     
     add=n1+n2;
     
     if(n1>n2)
     {
          sub=n1-n2;
     }
     else
     {
          sub=n2-n1;
     }
     printf("Addition=%d\n",add);
     printf("Subtraction=%d\n",sub);
     
     return 0;
}
/*
Enter numbers=
10
20
Addition=30
Subtraction=10

*/
