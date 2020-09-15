#include<stdio.h>
int main()
{
      int num;
      
      printf("Enter size of number=\n");
      scanf("%d",&num);
      
      int array[num];
      
      printf("Enter array number=\n");
      
      for(int itr=0;itr<num;itr++)
      {
          scanf("%d",&array[itr]);
      }
      
       for(int itr=0;itr<num;itr++)
       {
         int a=0,b=0;
         
         int x=array[itr];
         int rem=0,sum=0;
         
         while(x!=0)
         {
             rem=x%10;
             int fact=1;
            for(int j=1;j<=rem;j++)
             {
                 fact=fact*j;
             }
             sum=sum+fact;
             
             x=x/10;
         }
         if(array[itr]==sum)
         {
             a=array[itr];
         }
         
         int y=array[num];
         int r=0,s=0;
         
         while(y!=0)
         {
             r=y%10;
             int fac=1;
            for(int i=1;i<=r;i++)
             {
                 fac=fac*i;
             }
             s=s+fac;
             
             y=y/10;
         }
         if(array[num]==s)
         {
             b=array[num];
         }
         
         a=a+b;
         b=a-b;
         a=a-b;
         
         printf("%d ",a);
         printf("%d ",b);
         
         
     }
}
