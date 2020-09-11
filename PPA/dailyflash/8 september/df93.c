#include<stdio.h>
int main()
{
     int n;
     char ch='A';
     
     printf("Input=\n");
     scanf("%d",&n);
     
     for(int row=n;row>=1;row--)
     {
         for(int col=1;col<=row;col++)
         {
             printf(" %c",ch);
         }
         ch++;
         printf("\n");
     }
     return 0;
}
/*
Input=
5
 A A A A A
 B B B B
 C C C
 D D
 E

*/
