#include<stdio.h>
void main()
{
   int lb=0,ub=0;
   
   printf("Engter lower bound:\n");
   scanf("%d",&lb);
   
   printf("Engter upper bound:\n");
   scanf("%d",&ub);
   
   while(lb<=ub)
   {
      if(lb%2==0)
      {
          //lb=lb*lb*lb;
          printf("%d\n",lb*lb*lb);
      }
      else
      {
          //lb=lb*lb;
          printf("%d\n",lb*lb);
      }
      lb++;
   }
}


