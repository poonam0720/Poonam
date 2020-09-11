#include<stdio.h>
int main()
{
    int n1;
    printf("Enter number=\n");
    scanf("%d",&n1);
    
    if(n1%2==0)
    {
       printf("%d is even number\n",n1);
    }
    else
    {
      printf("%d is odd number\n",n1);
    }
    return 0;
}
/*
Enter number=
4
4 is even number

*/
