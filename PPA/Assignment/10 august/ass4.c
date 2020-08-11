#include<stdio.h>
int main()
{
   int start,end,i,rem,rev,temp;
   
   printf("Enter start number=\n");
   scanf("%d",&start);
   
   printf("Enter end number=\n");
   scanf("%d",&end);
   
   printf("Palindrome numbers between %d and %d are\n",start,end);
   
   for(i=start;i<=end;i++)
   {
       temp=i;
       rev=0;
       while(temp)
       {
         rem=temp%10;
         temp=temp/10;
         rev=rev*10+rem;
       }
       
       if(i==rev)
       printf("%d\t",i);
       
   }
   return 0;
}
/*
100
Enter end number=
200
Palindrome numbers between 100 and 200 are
101	111	121	131	141	151	161	171	181	191
*/
