#include<stdio.h>
int main()
{
     int n,rev=0,rem,org;
     printf("Enter number=\n");
     scanf("%d",&n);
     org=n;
     do
     {   while(n!=0)
       {
         rem=n%10;
         rev=rev*10+rem;
         n=n/10;
       }
     
     
       if(org==rev)
       {
          break;
          
       }
       else
       {
          printf("Number is %d\n",org);
       }
   }while(n>0);
     return 0;
}
/*
Eg1:
Enter number=
1001

Eg2:
Enter number=
545454545

Eg3:
Enter number=
675
Number is 675

Eg4:
Enter number=
987
Number is 987

*/
