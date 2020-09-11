#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter number=\n");
    scanf("%d",&n);
    
    for(int i=1;i<=n-1;i++)
    {
       if(n%i==0)
       {
            printf("%d ",i);
       }
    }
    return 0;
}
/*
Enter number=
24
1 2 3 4 6 8 12
*/
