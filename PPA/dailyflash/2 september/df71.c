#include<stdio.h>
int main()
{
     int n1,n2;
     
     printf("Enter min of series=\n");
     scanf("%d",&n1);
     printf("Enter max of series=\n");
     scanf("%d",&n2);
     
     for(int i=n1;i<=n2;i++)
     {
         if(i%2==0)
         {
            printf("%d ",i);
         }
     }
     return 0;
}
/*
Enter min of series=
4
Enter max of series=
60
4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60
*/
