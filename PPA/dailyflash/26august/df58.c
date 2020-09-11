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
2
2	4	6	8	10	12	14	16	18	20	
*/
