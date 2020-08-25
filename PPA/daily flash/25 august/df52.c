#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter number=\n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
         sum=sum+i;
    }
    printf("The sum number up  to %d=%d\n",n,sum);
    
    return 0;
}
/*
Enter number=
10
The sum number up  to 10=55

*/
