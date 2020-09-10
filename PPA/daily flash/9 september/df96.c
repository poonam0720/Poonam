#include<stdio.h>
int main()
{
   int n;
   printf("Input=\n");
   scanf("%d",&n);
   
   printf("Output=\n");
   for(int i=n;i>=1;i--)
   {
       if(i%2!=0)
       {
           printf("%d ",i);
       }
   }
   return 0;
   
}
/*
Input=
100
Output=
99 97 95 93 91 89 87 85 83 81 79 77 75 73 71 69 67 65 63 61 59 57 55 53 51 49 47 45 43 41 39 37 35 33 31 29 27 25 23 21 19 17 15 13 11 9 7 5 3 1
*/
