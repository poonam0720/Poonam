#include<stdio.h>
int main()
{
     int n1,n2;
     
     printf("Enter starting number=\n");
     scanf("%d",&n1);
     printf("Enter ending number=\n");
     scanf("%d",&n2);
     
     printf("Series of odd number between %d to %d is\n",n1,n2);
      
     for(int i=n1;i<=n2;i++)
     {
        
         if(i%2!=0)
         { 
              printf("%d ",i);
         }
     }
     return 0;
}
/*
Enter starting number=
4
Enter ending number=
60
Series of odd number between 4 to 60 is
5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59
*/
