#include<stdio.h>
void main()
{
    int num=0;
    int sum=0;
    int rem=0;
    printf("Enter number=\n");
    scanf("%d",&num);
 
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("%d\n",sum);
}
