#include<stdio.h>
int main()
{
     int n,sum,m;
     
     printf("Input=\n");
     scanf("%d",&m);
     
     printf("Series of all perfect number from 1 to %d is\n",n);
     
     for(int i=1;i<=m;i++)
     {
          n=1;
          sum=0;
          while(n<i)
          {
              if(i%n==0)
                  sum=sum+n;
 
              n++;
          }
              if(sum==i)
              printf("%d ",i);
          
     }
     
     
     return 0;
}
/*
Input=
100
Series of all perfect number from 1 to 21923 is
6 28 
*/
