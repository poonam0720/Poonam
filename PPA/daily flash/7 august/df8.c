#include<stdio.h>
int main()
{
   int n;
   printf("Enter number=\n");
   scanf("%d",&n);
   
   do
   {
       printf("%d\n",n);
       n--;
   }while(n!=0);
   
   return 0;
}

/*
Enter number=
10
10
9
8
7
6
5
4
3
2
1

*/
