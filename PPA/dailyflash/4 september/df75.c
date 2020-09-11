#include<stdio.h>
int main()
{
     int n,tab;
     
     printf("Enter number to print table=\n");
     scanf("%d",&n);
     
     for(int i=10;i>=1;i--)
     {
          tab=2*i;
          printf("2*%d=%d\n",i,tab);
     }
     
     return 0;
}
/*
Enter number to print table=
2
2*10=20
2*9=18
2*8=16
2*7=14
2*6=12
2*5=10
2*4=8
2*3=6
2*2=4
2*1=2

*/
