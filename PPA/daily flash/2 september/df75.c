#include<stdio.h>
int main()
{
     int n1,n2,n3,res;
     
     printf("Enter number1=\n");
     scanf("%d",&n1);
     printf("Enter number2=\n");
     scanf("%d",&n2);
     printf("Enter number3=\n");
     scanf("%d",&n3);
     
     if(n1>n2 && n1>n3)
     {
        res=n1;
     }
     else if(n2>n1 && n2>n3)
     {
        res=n2;
     }
     else
     {
        res=n3;
     }
     printf("The maximum number amongst %d, %d and %d is %d\n",n1,n2,n3,res);
     return 0;
}
/*
Enter number1=
56  
Enter number2=
7
Enter number3=
99
The maximum number amongst 56, 7 and 99 is 99

*/
