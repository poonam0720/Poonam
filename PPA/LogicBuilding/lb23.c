#include<stdio.h>
void main()
{
    int n,sum=0;
    
    printf("Enter number=\n");
    scanf("%d",&n);
    
    printf("\nPerfect divisor of %d are:\n",n);
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("Sum of all perfect divisor of %d are %d\n",n,sum);
}
/*

Enter number=
10

Perfect divisor of 10 are:
1 2 5 10 Sum of all perfect divisor of 10 are 18


*/
