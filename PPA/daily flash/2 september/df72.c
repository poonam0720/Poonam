#include<stdio.h>
int main()
{
     int n1,n2,res;
     
     printf("Enter number1=\n");
     scanf("%d",&n1);
     printf("Enter number2=\n");
     scanf("%d",&n2);
     
     if(n1>n2)
     {
        res=n2;
     }
     else
     {
        res=n1;
     }
     printf("The minimum number amongst %d and %d is %d\n",n1,n2,res);
     return 0;
}
/*
Enter number1=
56
Enter number2=
99
The minimum number amongst 56 and 99 is 56

*/
