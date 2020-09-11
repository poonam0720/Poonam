#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    
    printf("Enter number=\n");
    scanf("%d",&n);
    
    for(int i=1;i<=n-1;i++)
    {
       rem=n%i;
       if(rem==0)
       {
           sum=sum+i;
       }
    }
    if(sum==n)
    {
        printf("%d is perfect number.\n",n);
    }
    else
    {
        printf("%d is not perfect number.\n",n);
    }
    return 0;
}
/*
Enter number=
6
6 is perfect number.

*/
