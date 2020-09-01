#include<stdio.h>
int main()
{
     int n;
     
     printf("Enter the number:\n");
     scanf("%d",&n);
     
     for(int i=1;i<=n;i++)
     {
         if(i%2==0)
         {
             printf("Cube of %d:%d and square of %d:%d\n",i,i*i*i,i,i*i);
         }
     }
     return 0;
}
/*
Enter the number:
10
Cube of 2:8 and square of 2:4
Cube of 4:64 and square of 4:16
Cube of 6:216 and square of 6:36
Cube of 8:512 and square of 8:64
Cube of 10:1000 and square of 10:100

*/
