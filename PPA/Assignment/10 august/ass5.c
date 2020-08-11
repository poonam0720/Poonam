/*
0	
1	1	
2	3	5	
8	13	21	34	
*/

#include<stdio.h>
int main()
{
   int n;
   int cnt=0,cnt1=1;
   int res=0;
   
   printf("Enter number=\n");
   scanf("%d",&n);
   
   for(int row=1;row<=n;row++)
   {
       for(int col=1;col<=row;col++)
       {
           printf("%d\t",res);
           
           cnt=cnt1;
           cnt1=res;
           res=cnt+cnt1;
       }
       printf("\n");
   }
   return 0;
}
/*
Enter number=
4
0	
1	1	
2	3	5	
8	13	21	34	
*/
