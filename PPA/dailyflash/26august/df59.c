#include<stdio.h>
int main()
{
    int n;
    printf("Enter number to print table=\n");
    scanf("%d",&n);
    
    for(int i=1;i<=10;i++)
    {
        printf("%d\t",n*i);
    }
    return 0;
}
/*
Enter number to print table=
4
4	8	12	16	20	24	28	32	36	40p
*/
